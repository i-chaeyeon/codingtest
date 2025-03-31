#include <bits/stdc++.h>
using namespace std;

int arr[50] = {0, 1,};

int find(int num){
    if(num == 0 || num == 1){
        return arr[num];
    }
    if(arr[num] == 0) arr[num] = find(num-1) + find(num-2);
    return arr[num];
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for(int i=0; i<T; i++){
        int num = 0;
        cin >> num;
        
        if(num == 0){
            cout << "1 0 \n"; 
            continue;
        }
        cout << find(num-1) << ' ' << find(num)<< "\n";

    }
}