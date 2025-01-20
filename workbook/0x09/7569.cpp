/// 시작점이 여러개인 경우 BFS (3차원)

#include <bits/stdc++.h>
using namespace std;

int n, m, h;
int board[103][103][103];
int dist[103][103][103];
// 인접한 6개의 칸 (위/아래/왼쪽/오른쪽/앞/뒤)을 처리하기 위해 dx, dy, dz 사용
int dx[6] = {0, 0, 1, -1, 0, 0};
int dy[6] = {1, -1, 0, 0, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};
queue<tuple<int,int,int>> Q;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    
    cin >> m >> n >> h;
    for(int i=0; i<h; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<m; k++){
                int temp;
                cin >> temp;
                board[j][k][i] = temp;
                if(temp == 1) Q.push({j,k,i});
                if(temp == 0) dist[j][k][i] = -1;
            }
        }
    }

    while(!Q.empty()){
        auto cur = Q.front(); Q.pop();
        //tuple이기 때문에 세 int를 tie해서 할당
        int curX, curY, curZ;
        tie(curX, curY, curZ) = cur;
        for(int dir=0; dir<6; dir++){
            int nx = curX + dx[dir];
            int ny = curY + dy[dir];
            int nz = curZ + dz[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m || nz < 0 || nz >= h) continue;
            if(dist[nx][ny][nz] >= 0) continue;
            dist[nx][ny][nz] = dist[curX][curY][curZ] + 1;
            Q.push({nx,ny,nz}); 
        }
    }

    int ans = 0;
    for(int i=0; i<h; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<m; k++){
                if(dist[j][k][i] == -1){
                    cout << -1;
                    return 0;
                }
                ans = max(ans, dist[j][k][i]);
            }
        }
    }
    cout << ans;
}