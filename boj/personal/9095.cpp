#include <bits/stdc++.h>
using namespace std;
int T;
int dp[12] = {0, 1, 2, 4}; //0 1 2 3

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;  
    int dpIdx = 4;
    for(int i=0; i<T; i++){
        int N;
        cin >> N;

        if(dp[N]==0){
            for(int j=dpIdx; j<=N; j++){
                dp[j] = dp[j-1] + dp[j-2] + dp[j-3];
            }
            dpIdx = N;
        }

        cout << dp[N] << "\n";
    }

}