#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int min = 100;
    int sum = 0;

    for(int i=0; i<7; i++){
        int num=0;
        cin >> num;
        if(num%2){
            if(num<min) min = num;
            sum += num;
        }   
    }

    if(sum){
        cout << sum << "\n" << min;
    } else {
        cout << -1;
    }

}