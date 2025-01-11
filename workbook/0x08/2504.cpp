#include <bits/stdc++.h>
using namespace std;

stack<char> S;
stack<int> AS;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    int ans = 0;
    int idx = 0;

    for(auto c : s){
        if(c == '(' || c == '[') {
            S.push(c);
            idx++;
        }
        
        if(c == ')'){
            if(s[idx-1]=='('){
                S.pop();
                AS.push(2);
                cout << "push 2 \n";
            } else {
                int temp = 0;
                do{
                    temp += AS.top();
                    AS.pop();
                } while(S.top() != '(');
                AS.push(temp*2);
            }
            idx++;
        }
        if(c == ']'){
            if(s[idx-1]=='['){
                S.pop();
                AS.push(3);
            } else {
                int temp = 0;
                do{
                    temp += AS.top();
                    AS.pop();
                } while(S.top() != '[');
                AS.push(temp*3);
            }
            idx++;
        }
    }

    while(AS.size()>0){
        ans += AS.top();
        AS.pop();
    }

    cout << ans;


}