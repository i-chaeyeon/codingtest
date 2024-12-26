#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    // 1. min/max 함수 사용
    // int a, b, c;
    // cin >> a >> b >> c;

    // int d, e, f;
    // d = min({a,b,c});
    // f = max({a,b,c});
    // e = (a+b+c)-(d+f);

    // cout << d << ' ' << e << ' ' << f;

    // 2. 배열로 받아서 sort 사용
    int arr[3];
    for(int i=0; i<3; i++){
        cin >> arr[i];
    }
    sort(arr, arr+3);

    for(int i=0; i<3; i++){
        cout << arr[i] << ' ';
    }

}