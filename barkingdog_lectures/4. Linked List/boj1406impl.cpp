#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000005;
char dat[MAX];
int pre[MAX];
int nxt[MAX];
int unused = 1;

void insert(int addr, char value){ 
    dat[unused] = value;
    pre[unused] = addr;
    nxt[unused] = nxt[addr];
    if(nxt[addr] != -1)
        pre[nxt[addr]] = unused;
    nxt[addr] = unused;
    unused++;
}

void erase(int addr){ 
    nxt[pre[addr]] = nxt[addr];
    if(nxt[addr]!=-1)
        pre[nxt[addr]] = pre[addr];
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    fill(pre, pre+MAX, -1);
    fill(nxt, nxt+MAX, -1);

    string s;
    cin >> s;

    int M;
    cin >> M;

    int cursor = 0;
    for(auto c : s){
        insert(cursor, c);
        cursor++;
    }

    for(int i=0; i<M; i++){
        char op;
        cin >> op;

        if(op == 'L'){ // 커서를 왼쪽으로 한 칸 옮김 (커서가 문장의 맨 앞이면 무시됨)
            if(pre[cursor] != -1)  
                cursor = pre[cursor];
        } else if (op == 'D'){ // 커서를 오른쪽으로 한 칸 옮김 (커서가 문장의 맨 뒤이면 무시됨)
            if(nxt[cursor] != -1)   
                cursor = nxt[cursor];
        } else if (op == 'B'){ // 커서 왼쪽에 있는 문자를 삭제함 (커서가 문장의 맨 앞이면 무시됨)
            if(pre[cursor] != -1){
                erase(cursor);
                cursor = pre[cursor];
            }
        } else if (op == 'P'){ // $라는 문자를 커서 왼쪽에 추가함
            char add;
            cin >> add;
            insert(cursor, add);
            cursor = nxt[cursor];
        }
    }
    
    int idx = nxt[0];
    while(idx != -1){
        cout << dat[idx];
        idx = nxt[idx];
    }
    
}