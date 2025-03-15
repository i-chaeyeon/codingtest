#include <bits/stdc++.h>
using namespace std;

int lan[10001];

int main(void){
    int K, N;
    cin >> K >> N;

    int max = 0;
    for(int i=0; i<K; i++){
        cin >> lan[i];
        if(i==0 || max < lan[i]) max = lan[i];
    }

    int left = 1;
    int right = max;
    while(left < right){
        int mid = left + (right-left)/2;
        int total = 0;
        for(int i=0; i<K; i++){
            total += lan[i]/mid;
        }
        if(total == N){
            cout << mid;
            return 0;
        } else if(total < N){
            right = mid-1;
        } else {
            left = mid +1;
        }
    }


}