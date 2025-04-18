#include <bits/stdc++.h>
#include <climits>
using namespace std;

long long N, M; //나무의 수 N, 가져가려는 나무의 길이 M
int arr[1000001]; // 나무의 높이
long long rightend = -1;
long long leftend = 0;
long long ans;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;
    for(int i=0; i<N; i++){
        cin >> arr[i];
        if(arr[i] > rightend) rightend = arr[i]; //위
        if(arr[i] < leftend) leftend = arr[i]; // 아래
    }

    while(leftend <= rightend){
        long long sum = 0;
        long long mid = leftend + (rightend-leftend)/2;

        for(int i=0; i<N; i++){
            if(arr[i]-mid > 0) sum += arr[i]-mid;
        }

        if(sum >= M){ //위에서부터 덜 잘라도 됨
            leftend = mid + 1;
            ans = max(ans, mid);
        } else {
            rightend = mid - 1;
        }
    }

    cout << ans;

}