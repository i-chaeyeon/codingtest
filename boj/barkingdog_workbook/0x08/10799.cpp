#include <bits/stdc++.h>
using namespace std;

stack<pair<int,char>> S;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    int count = 0;
    int idx = 0;

    for(auto c : s){
        if(S.empty()) { //empty stack
            S.push({idx, c});
            idx++;
            continue;
        }

        if(c == ')' && S.top().first == idx-1){ //laser
            S.pop();
            count += S.size(); 
            idx++;
            continue;
        } 

        if(c == '('){
            S.push({idx,c});
            idx++;
        } else if (c == ')'){
            S.pop();
            idx++;
            count++;
        }
    }

    cout << count;
}