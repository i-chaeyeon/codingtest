#include <bits/stdc++.h>
using namespace std;

int arr[4];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int idx = 0;
    for(int i=0; i<3; i++){
        string s;
        cin >> s;

        if(s[0] == 'F' || s[0] == 'B') continue;
        else {
            arr[i] = stoi(s);
            idx = i;
            continue;
        }
    }

    int num = arr[idx];
    for(int i=idx+1; i<4; i++){
        arr[i] = arr[i-1] + 1;
    }

    if(arr[3]%15 == 0){
        cout << "FizzBuzz";
    } else if (arr[3]%3 == 0){
        cout << "Fizz";
    } else if (arr[3]%5 == 0){
        cout << "Buzz";
    } else {
        cout << arr[3];
    }
}