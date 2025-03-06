#include <bits/stdc++.h>
using namespace std;

int main(void){
    int a[21];
    int b[21][21];

    // 1. memset
    // memset(a, 0, sizeof a);

    // 2. for문 돌면서 다 바꾸기
    
    // 3. algorithm 헤더의 fill
    fill(a, a+21, 0);
    for(int i=0; i<21; i++){
        fill(b[i], b[i]+21, 0);
    }
}