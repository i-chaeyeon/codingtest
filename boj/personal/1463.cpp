#include <bits/stdc++.h>
using namespace std;

int N;
int dp[1000001] = {0, 0, 1, 1, }; // 0 1 2 3 

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for(int i=4; i<N+1; i++){
        int temp = dp[i-1]+1;
        if(i%3 == 0){
            temp = min(dp[i/3]+1, temp);
        }
        if (i%2 == 0){
            temp = min(dp[i/2]+1, temp);
        } 
        dp[i] = temp;
    }

    cout << dp[N] ;
}

