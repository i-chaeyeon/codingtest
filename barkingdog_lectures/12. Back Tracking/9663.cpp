// N × N인 체스판 위에 퀸 N개를 서로 공격할 수 없게 놓는 문제
// 퀸은 체스판 위에서 상하좌우와 대각선으로 공격할 수 있는 기물

// 일단 각 행에 퀸은 단 1개씩만 있어야함
// 문제는 특정 좌표에 퀸을 둘 수 있는지를 어떻게 판단할 것인가

#include <bits/stdc++.h>
using namespace std;

int n;
int cnt; //cur번째 행에 말을 배치할 예정

bool isused1[40]; //isused1은 열에 대응되는 값으로, (x, y)에 퀸이 있으면 isused1[y]를 true로 
bool isused2[40]; //좌측 하단과 우측 상단을 연결하는 대각선이고 (x, y)에 퀸이 있으면 isused2[x+y]를 true로
bool isused3[40]; //좌측 상단과 우측 하단을 연결하는 대각선이고 (x, y)에 퀸이 있으면 isused3[x-y+n-1]을 true로

// (cur, i)에 퀸을 둘 수 있다면 isused1[i], isused2[cur+i], isused[cur-i+n-1]을 true로 변경한 후 
// func(cur+1)을 호출

void func(int cur){
    // 종료 조건
    if(cur==n){
        cnt++;
        return;
    }

    // 재귀 조건
    for(int i=0; i<n; i++){
        if(isused1[i] || isused2[i+cur] || isused3[cur-i+n-1])
            continue;
        isused1[i] = 1;
        isused2[i+cur] = 1; // ↖↗ 대각선 사용 표시
        isused3[cur-i+n-1] = 1; // ↙↘ 대각선 사용 표시

        func(cur+1);

        isused1[i] = 0;
        isused2[i+cur] = 0;
        isused3[cur-i+n-1] = 0;
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    func(0);
    cout << cnt;
}