#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[9] = {0,}; //0~8까지만 

    string s;
    cin >> s;

    int result = 0;

    for(auto c : s){
        if(c == '9' || c == '6'){
            arr[6]++;
            continue;
        }
        arr[c-'0']+=1;
        result = max(result, arr[c-'0']);
    }

    if(arr[6]%2){
        result = max(result, arr[6]/2+1);
    } else {
        result = max(result, arr[6]/2);
    }
    
    cout << result;

}