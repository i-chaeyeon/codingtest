#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[20];
    for(int i=0; i<20; i++){
        arr[i] = i+1;
    }

    for(int i=0; i<10; i++){
        int a, b;
        cin >> a >> b;
        while(a<b){
            swap(arr[a-1], arr[b-1]);
            a++;
            b--;
        }
    }

    for(int i=0; i<20; i++){
        cout << arr[i] << ' ';
    }
}