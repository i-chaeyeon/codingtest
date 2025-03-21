#include <bits/stdc++.h>
using namespace std;

int lan[10001];

int main(void){
    int K, N;
    cin >> K >> N;

    long long maxLen = 0;
    for(int i=0; i<K; i++){
        cin >> lan[i];
        if(lan[i] > maxLen) maxLen = lan[i];
    }

    long long left = 1;
    long long right = maxLen;
    long long ans = 0;

    while(left <= right){
        long long mid = (left + right) / 2;
        long long total = 0;
        for(int i=0; i<K; i++){
            total += lan[i] / mid;
        }

        if(total >= N){ 
            ans = mid; 
            left = mid + 1;
        } else { 
            right = mid - 1;
        }
    }

    cout << ans << '\n';
}