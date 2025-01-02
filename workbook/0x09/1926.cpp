#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int pic[501][501];
int vis[501][501];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m; //세로 가로
    cin >> n >> m;

    queue<pair<int, int>> Q;

    int count = 0;
    int mx = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> pic[i][j];
        }
    }

    // 이어진 그림의 시작점을 찾아 BFS
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            //그림의 시작점이 아닌 경우부터 거르기
            if(pic[i][j] == 0 || vis[i][j] == 1) continue;
            //시작점을 찾았으니 BFS도 시작
            count++;
            vis[i][j] = 1;
            Q.push({i,j});
            int area = 1; // 면적을 구하기 위한 변수
            while(!Q.empty()){
                pair<int, int> cur = Q.front(); Q.pop();
                for(int dir=0; dir<4; dir++){
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    // 범위 확인 먼저
                    if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
                    // 방문 안 한 이어진 그림인지 확인
                    if(pic[nx][ny] == 0 || vis[nx][ny] == 1) continue;
                    vis[nx][ny] = 1;
                    Q.push({nx,ny});
                    area++;
                }
            }
            mx = max(mx, area);
        }
    }



    cout << count << "\n" << mx;
}