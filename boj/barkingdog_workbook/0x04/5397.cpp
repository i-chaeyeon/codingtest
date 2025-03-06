#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for(int i=0; i<N; i++){
        string input;
        cin >> input;

        list<char> password;
        list<char>::iterator cursor = password.begin();

        for(auto c : input){
            if(c == '<'){
                //moveleft(cursor);
                if(cursor != password.begin()) cursor--;
            } else if (c == '>'){
                //moveright(cursor);
                if(cursor != password.end()) cursor++;
            } else if (c == '-'){
                //erase(cursor);
                
                if(cursor != password.begin()) {
                    cursor--;
                    cursor = password.erase(cursor);
                }
            } else{
                // insert(cursor, c);
                // cursor++;
                password.insert(cursor, c);
            }
        }

        for(auto c : password)
            cout << c;
        
        cout << "\n";

    }
    return 0;
}