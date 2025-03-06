#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for(int i=0; i<N; i++){
        short int alphabets[26] = {0,};
        string s;
        cin >> s;
        for(auto c : s) alphabets[c-'a']++;

        cin >> s;
        for(auto c : s) alphabets[c-'a']--;
        
        bool isPossible = true;
        for(int j=0; j<26; j++){
            if(alphabets[j]) {
                cout << "Impossible\n";
                isPossible = false;
                break;
            }
        }
        if(isPossible) cout << "Possible\n";
    }
}