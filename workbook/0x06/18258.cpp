#include <bits/stdc++.h>
using namespace std;

queue<int> Q;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    string op;
    for(int i=0; i<N; i++){
        cin >> op;
        if(op == "push"){
            int num;
            cin >> num;
            Q.push(num);
        } else if (op == "pop"){
            if(Q.empty()) cout << "-1 \n";
            else{
                cout << Q.front() << "\n";
                Q.pop();
            }
        } else if (op == "size"){
            cout << Q.size() << "\n";
        } else if (op == "empty"){
            cout << (int) Q.empty() << "\n";
        } else if (op == "front"){
            if(Q.empty()) cout << "-1 \n";
            else{
                cout << Q.front() << "\n";
            }
        } else if (op == "back"){
            if(Q.empty()) cout << "-1 \n";
            else{
                cout << Q.back() << "\n";
            }
        }
    }
}