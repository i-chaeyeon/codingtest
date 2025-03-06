#include <bits/stdc++.h>
using namespace std;


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    while (true){
        stack<char> S;
        getline(cin,s);
        if(s == ".") break;
        int flag = 0;
        for(auto c : s){
            if(c == '('){
                S.push(c);
            } else if (c == ')'){
                if(S.empty() || S.top() != '('){
                    flag = 1;
                    break;
                }
                S.pop();
            } else if (c == '['){
                S.push(c);
            } else if (c == ']'){
                if(S.empty() || S.top() != '['){
                    flag = 1;
                    break;
                }
                S.pop();
            }
        }
        if(S.size() == 0 && flag == 0) cout << "yes\n";
        else cout << "no\n";
    }

}