# 09. BFS

- Flood Fill
- 다차원 배열의 거리 측정

### Queue로 구현
: pop한 대상과 인접하며 아직 방문하지 않은 목표 push, queue가 빌때까지 반복 (O(N)) <br/>
: utility.h 의 pair 사용해서 쌍으로 관리

### 구현 시 주의 사항
1. 시작점에 반드시 방문했다는 표시 남기기
2. 반드시 큐에 "넣을 때" 방문했다는 표시 남기기
3. 이웃한 원소가 범위를 벗어났는지 검증하기


```cpp
//BFS 예시
//(0, 0)과 상하좌우로 이어진 모든 파란색 칸을 확인 
#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int vis[502][502];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<pair<int, int>> Q; //pair queue 선언 (BFS 작동에 필요)
    vis[0][0] = 1; // (0,0) 방문 표시
    Q.push({0,0});

    while(!Q.empty()){ // 큐가 빌때까지 계속 반복
        pair<int, int> cur = Q.front(); Q.pop(); // 기준이 될 pair (현재 위치한 pair)
        for(int dir=0; dir<4; dir++){ //4개의 방향으로 전부 다 방문
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            // 예외 처리 - 순서 엄수
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue; //첫번째 예외: 보드의 범위를 벗어난 경우
            if(vis[nx][ny] || board[nx][ny] != 1) continue; //두번째 예외: 이미 방문했거나 파란색 칸이 아닌 경우
            
            // 예외 처리가 끝난 후 노드 방문 시 마킹 & 큐에 푸시
            vis[nx][ny] = 1;
            Q.push({nx.ny});
        }
    }
}

```