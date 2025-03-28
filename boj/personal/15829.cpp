#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int L;
    string s;
    cin >> L;
    cin >> s;


    long long  sum = 0;
    long long  r = 1;
    for(auto c : s){
        int num = c - 'a' + 1;
        sum += (num*r)%1234567891;
        r=(r*31)%1234567891;
    }

    cout << sum%1234567891;
}