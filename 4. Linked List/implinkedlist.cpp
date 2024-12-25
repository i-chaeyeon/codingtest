#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int pre[MX];
int nxt[MX];
int unused = 1;


// 모든 원소를 출력하는 함수
void traverse(){
    int cur = nxt[0];
    while(cur != -1){
        cout << dat[cur] << ' ';
        cur = nxt[cur];
    }
    cout << "\n\n";
}

void insert(int addr, int num){ //addr 뒤에 num을 insert
    dat[unused] = num;
    pre[unused] = addr;
    nxt[unused] = nxt[addr];
    if(nxt[addr]!=-1)
        pre[nxt[addr]] = unused; //pre[-1] 접근 방지 -> 제일 끝에 원소를 추가하는 경우
    nxt[addr] = unused;
    unused++;
}

void erase(int addr){ //addr에 있는 정보를 erase
    nxt[pre[addr]] = nxt[addr];
    if(nxt[addr] != -1)
        pre[nxt[addr]] = pre[addr]; //pre[-1] 접근 방지 -> 제일 끝에 원소를 제거하는 경우
}

void insert_test(){
  cout << "****** insert_test *****\n";
  insert(0, 10); // 10(address=1)
  traverse();
  insert(0, 30); // 30(address=2) 10
  traverse();
  insert(2, 40); // 30 40(address=3) 10
  traverse();
  insert(1, 20); // 30 40 10 20(address=4)
  traverse();
  insert(4, 70); // 30 40 10 20 70(address=5)
  traverse();
}

void erase_test(){
  cout << "****** erase_test *****\n";
  erase(1); // 30 40 20 70
  traverse();
  erase(2); // 40 20 70
  traverse();
  erase(4); // 40 70
  traverse();
  erase(5); // 40
  traverse();
}

int main(void){
    fill(pre, pre+MX, -1);
    fill(nxt, nxt+MX, -1);
    insert_test();
    erase_test();
}   