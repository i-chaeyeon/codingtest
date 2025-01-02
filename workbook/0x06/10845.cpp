#include <bits/stdc++.h>
using namespace std;

// 01. STL
// int main(void){
//     ios::sync_with_stdio(0);
//     cin.tie(0);

//     int N;
//     cin >> N;

//     queue<int> Q;
//     string op;
//     for(int i=0; i<N; i++){
//         cin >> op;
//         if(op == "push"){
//             int num;
//             cin >> num;
//             Q.push(num);
//         } else if (op == "pop"){
//             if(Q.empty()) cout << "-1\n";
//             else {
//                 cout << Q.front() << "\n";
//                 Q.pop();
//             }
//         } else if (op == "size"){
//             cout << Q.size() << "\n";
//         } else if (op == "empty"){
//             cout << (int) Q.empty() << "\n";
//         } else if (op == "front"){
//             if(Q.empty()) cout << "-1\n";
//             else cout << Q.front() << "\n";
//         } else if (op == "back"){
//             if(Q.empty()) cout << "-1\n";
//             else cout << Q.back() << "\n";
//         } else {
//             cout << "Unknown operation\n";
//         }
//     }
// }

// 02. 구현

const int MAX = 10001;
int dat[MAX];
int head, tail;

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
            dat[tail++] = num;
        } else if (op == "pop"){
            if(head==tail) cout << "-1\n";
            else cout << dat[head++] << "\n";
        } else if (op == "size"){
            cout << tail-head << "\n";
        } else if (op == "empty"){
            if(head==tail) cout << "1\n";
            else cout << "0\n";
        } else if (op == "front"){
            if(head==tail) cout << "-1\n";
            else cout << dat[head] << "\n";
        } else if (op == "back"){
            if(head==tail) cout << "-1\n";
            else cout << dat[tail-1] << "\n";
        } else {
            cout << "Unknown operation\n";
        }
    }
}