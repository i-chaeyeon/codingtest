#include <bits/stdc++.h>
using namespace std;

// const int MAX = 10001;
// int dat[MAX];
// int pos = 0;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    string op;

    // 1. 배열 스택
    // for(int i=0; i<N; i++){
    //     cin >> op;
    //     if(op == "push"){
    //         int x;
    //         cin >> x;
    //         dat[pos++] = x;
    //     } else if (op == "pop"){
    //         if(pos != 0) {
    //             cout << dat[pos-1] << "\n";
    //             pos--;
    //         } else cout << -1 << "\n";
    //     } else if (op == "size"){
    //         cout << pos << "\n";
    //     } else if (op == "empty"){
    //         if(pos == 0) cout << 1 << "\n";
    //         else cout << 0 << "\n";
    //     } else if (op == "top"){
    //         if(pos != 0) cout << dat[pos-1] << "\n";
    //         else cout << -1 << "\n";
    //     } else {
    //         cout << "unknown operation";
    //     }
    // }

    // 2. STL 스택

    stack<int> S;
    for(int i=0; i<N; i++){
        cin >> op;
        if(op == "push"){
            int x;
            cin >> x;
            S.push(x);
        } else if (op == "pop"){
            if(S.empty()) cout << -1 << "\n";
            else {
                cout << S.top() << "\n";
                S.pop();
            }
        } else if (op == "size"){
            cout << S.size() << "\n";
        } else if (op == "empty"){
            cout << S.empty() << "\n";
        } else if (op == "top"){
            if(!S.empty()){
                cout << S.top() << "\n";
            } else cout << -1 << "\n";
        }
    }
}