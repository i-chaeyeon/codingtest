#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    getline(cin, s);

    int M;
    cin >> M;

    list<char> L;
    for(auto c : s)
        L.push_back(c);
    auto cursor = L.end();

    for(int i=0; i<M; i++){
        char op;
        cin >> op;
        if(op == 'L'){ // 커서를 왼쪽으로 한칸 움직임
            if(cursor != L.begin())
                cursor--;
        } else if (op == 'D'){ // 커서를 오른쪽으로 한칸 움직임
            if(cursor != L.end())
                cursor++;
        } else if (op == 'B'){ // 커서 왼쪽의 문자를 삭제함
            if(cursor != L.begin()){
                cursor--;
                cursor = L.erase(cursor);
            }
        } else if (op == 'P'){ // 커서 왼쪽에 이어지는 문자를 추가함
            char add;
            cin >> add;
            L.insert(cursor,add);
        }
    }

    for (auto c : L) cout << c;
}