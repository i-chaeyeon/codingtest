#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    deque<int> DQ;
    string op;
    for(int i=0; i<N; i++){
        cin >> op;
        if(op == "push_front"){
            int x;
            cin >> x;
            DQ.push_front(x);
        } else if (op == "push_back"){
            int x;
            cin >> x;
            DQ.push_back(x);
        } else if (op == "pop_front"){
            if(DQ.empty()) cout << "-1\n";
            else {
                cout << DQ.front() << "\n";
                DQ.pop_front();
            }
        } else if (op == "pop_back"){
            if(DQ.empty()) cout << "-1\n";
            else {
                cout << DQ.back() << "\n";
                DQ.pop_back();
            }
        } else if (op == "size"){
            cout << DQ.size() << "\n";
        } else if (op == "empty"){
            cout << (int) DQ.empty() << "\n";
        } else if (op == "front"){
            if(DQ.empty()) cout << "-1\n";
            else cout << DQ.front() << "\n";
        } else if (op == "back"){
            if(DQ.empty()) cout << "-1\n";
            else cout << DQ.back() << "\n";
        } else {
            cout << "Unknown operation\n";
        }

    }
}