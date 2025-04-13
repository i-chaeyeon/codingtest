#include <bits/stdc++.h>
using namespace std;
int T;
int N;
map<string, int> m;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;
    for(int i=0; i<T; i++){
        cin >> N;

        for(int j=0; j<N; j++){
            string name;
            string clothType;
            cin >> name >> clothType;

            m[clothType]++;
        }

        int sum = 1;
        for(auto s : m){
            sum *= s.second+1;
        }
        
        cout << sum-1 << "\n";
        m.clear();
    }
    
}