#include <bits/stdc++.h>
using namespace std;

int main(void){
    int alphabets[26] = {0,};
    string s;

    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> s;

    for(auto c : s){
        alphabets[c-'a'] += 1;
    }

    for(int e : alphabets)
        cout << e << ' ';
}