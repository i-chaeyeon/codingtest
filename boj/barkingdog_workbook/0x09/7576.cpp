/// 시작점이 여러개인 경우 BFS

#include <bits/stdc++.h>
using namespace std;
#define X first 
#define Y second

// 1은 경계검사를 단순하게 하기 위해서, 1은 1-based index를 쓸 수 도 있기 때문
// 2 ≤ M,N ≤ 1,000
int board[1002][1002]; 
int dist[1002][1002];
int n,m;

// bfs vector
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    // m: 가로, n: 세로
    cin >> m >> n;

    queue<pair<int,int>> Q;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> board[i][j];
            if(board[i][j] == 1) Q.push({i,j}); // 익은 토마토는 큐에 넣고
            if(board[i][j] == 0) dist[i][j] = -1; // 익지 않거나 빈 토마토는 dist를 -1로 초기화
        }
    }

    while(!Q.empty()){
        auto cur = Q.front(); Q.pop();
        for(int dir=0; dir<4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue; // 범위 벗어나는 경우 제외
            if(dist[nx][ny] >= 0) continue; // 이미 익은 경우 제외
            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
            Q.push({nx,ny});
        }
    }

    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(dist[i][j] == -1) {
                cout << -1;
                return 0;
            }
            ans = max(ans, dist[i][j]);
        }
    }
    cout << ans;
    return 0;
}