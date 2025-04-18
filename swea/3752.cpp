#include <bits/stdc++.h>
using namespace std;
int T, N;
int scores[101];
bool available [10001];

int main(int argc, char** argv)
{
	int test_case;
	int T;
	freopen("input.txt", "r", stdin);
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
        // initialize
        for(int j=0; j<10001; j++){
            available[j] = false;
        }
        int max = 0;
        int count = 0;

        cin >> N;
        available[0] = true;
        count++;

        for(int j=0; j<N; j++){
            cin >> scores[j];
            max += scores[j];
        
            for(int k=max; k>=0; k--){
                if(available[k]){
                    available[k+scores[j]] = true;
                }
            }
            if(!available[scores[j]]){
                available[scores[j]] = true;
            }
        }

        for(int i=0; i<=max; i++){
            if(available[i]) count++;
        }
        cout << "#" << test_case << " " << count << "\n";


	}
	return 0;
}