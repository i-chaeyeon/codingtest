#include <bits/stdc++.h>
using namespace std;

int main(void){

    string s;
    cin >> s;

    while(s != "0"){
        for(int i=0; i<s.length()/2; i++){
            int endIdx = s.length()-i-1;
            if(s[i] != s[endIdx]){
                cout << "no\n";
                break;
            }
            if(i == s.length()/2 -1) {
                cout << "yes\n";
            }
        }

        if(s.length() == 1){
            cout << "yes\n";
        }

        cin >> s;
    }
}