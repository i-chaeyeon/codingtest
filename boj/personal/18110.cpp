#include <bits/stdc++.h>
using namespace std;

int arr[300001];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    if(n == 0) {
        cout << 0;
        return 0;
    }

    int sum = 0;

    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum += arr[i];
    }   

    sort(arr, arr+n);
    int except = round(n*0.15);
    for(int i=0; i<except; i++){
        sum -= arr[i];
        sum -= arr[n-1-i];
    }
    sum = round((double)sum/(n-(except*2)));
    cout << sum;
}
