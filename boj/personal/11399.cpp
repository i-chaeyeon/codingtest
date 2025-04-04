#include <bits/stdc++.h>
using namespace std;

int N;
int arr[1001];
int sumArr[1001];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for(int i=0; i<N; i++){
        cin >> arr[i];
    }
    sort(arr, arr+N);

    int sum = arr[0];
    sumArr[0] = arr[0];
    for(int i=1; i<N; i++){
        sumArr[i] = sumArr[i-1] + arr[i];
        sum += sumArr[i];
    }

    cout << sum;
}