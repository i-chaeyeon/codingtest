// 시작점이 두 종류일 때
#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

string board[1002];
int distmove[1002][1002];
int distfire[1002][1002];
int n, m;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m; //n 행 m 열

    //dist 초기화
    for(int i=0; i<n; i++){
        fill(distmove[i], distmove[i]+m, -1);
        fill(distfire[i], distfire[i]+m, -1);
    }

    //board 입력
    for(int i=0; i<n; i++){
        cin >> board[i];
    }

    //
    queue<pair<int,int>> moveQ;
    queue<pair<int,int>> fireQ;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(board[i][j] == 'J'){
                moveQ.push({i,j});
                distmove[i][j] = 0;
            }
            if(board[i][j] == 'F'){
                fireQ.push({i,j});
                distfire[i][j] = 0;
            }
        }
    }

    // 불이 퍼지는 BFS를 먼저 해서 distfire에 전부 기록
    while(!fireQ.empty()){
        auto cur = fireQ.front(); fireQ.pop();
        for(int dir=0; dir<4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx<0 || nx >= n || ny<0 || ny>=m) continue;
            if(board[nx][ny] == '#' || distfire[nx][ny] >= 0) continue;
            distfire[nx][ny] = distfire[cur.X][cur.Y] + 1;
            fireQ.push({nx,ny});
        }
    }

    // 이동하는 BFS를 해서 distfire의 값과 비교
    // distfire보다 값이 작을때만 그쪽으로 이동 가능
    while(!moveQ.empty()){
        auto cur = moveQ.front(); moveQ.pop();
        for(int dir=0; dir<4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx<0 || nx >= n || ny<0 || ny>=m){ //범위를 벗어남 == 탈출에 성공함
                cout << distmove[cur.X][cur.Y] + 1;
                return 0;
            }
            if(board[nx][ny] == '#' || distmove[nx][ny] >= 0) continue;
            if(distfire[nx][ny] != -1 && distfire[nx][ny] <= distmove[cur.X][cur.Y] + 1) continue;
            distmove[nx][ny] = distmove[cur.X][cur.Y] + 1;
            moveQ.push({nx, ny});
        }
    }
    cout << "IMPOSSIBLE";
}