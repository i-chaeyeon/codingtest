#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s1, s2;
    cin >> s1 >> s2;

    int alphabets[26]= {0, };

    for(auto c : s1) alphabets[c-'a']++;
    for(auto c : s2) alphabets[c-'a']--;

    int result = 0;
    for(int i=0; i<26; i++){
        if(alphabets[i]!=0){
            result += abs(alphabets[i]);
        }
    }

    cout << result;
    
}