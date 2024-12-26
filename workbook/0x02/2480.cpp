#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[3];
    for(int i=0; i<3; i++){
        cin >> arr[i];
    }
    sort(arr, arr+3);

    int prize = 0;
    if(arr[0] == arr[2]){
        prize = 10000 + 1000*arr[0];
    } else if (arr[0] == arr[1] || arr[1] == arr[2]){
        prize = 1000 + 100*arr[1];
    } else {
        prize = 100*arr[2];
    }

    cout << prize;
}