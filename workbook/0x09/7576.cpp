#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int tomatoes[1002][1002];
int dist[1002][1002];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int m, n; //가로 세로
    cin >> m >> n;

    int totalcnt = m*n;

    queue<pair<int, int>> Q;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> tomatoes[i][j];
            if (tomatoes[i][j] == 1){
                Q.push({i,j});
            } 
            if (tomatoes[i][j] == 0){
                dist[i][j] = -1;
            }
        }
    }
    
    while(!Q.empty()){
        pair<int, int> cur = Q.front(); Q.pop();
        for(int dir = 0; dir<4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(dist[nx][ny] >= 0) continue;
            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
            Q.push({nx,ny});
        }
    }

    int days = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(dist[n][m] == -1){
                cout << -1;
                return 0;
            }
            days = max(days, dist[i][j]);
        }
    }
    cout << days;
}