#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[301][301];
int vis[301][301];

int dx[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for(int i=0; i<T; i++){
        //board, vis 초기화
        for(int j=0; j<301; j++){
            fill(board[j], board[j]+300, 0);
            fill(vis[j], vis[j]+300, -1);
        }
        //board 크기
        int l;
        cin >> l;

        //출발 지점
        int startX, startY;
        cin >> startX >> startY;

        //종료 지점
        int endX, endY;
        cin >> endX >> endY;

        queue<pair<int,int>> Q;
        vis[startX][startY] = 0;
        Q.push({startX, startY});
        while(!Q.empty()){
            auto cur = Q.front(); Q.pop();
            for(int dir=0; dir<8; dir++){
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];
                if(nx < 0 || nx >= l || ny < 0 || ny >= l) continue;
                if(vis[nx][ny] != -1) continue;
                Q.push({nx, ny});
                vis[nx][ny] = vis[cur.X][cur.Y]+1;
            }
            if(vis[endX][endY] != -1)
                break;
        }

        cout << vis[endX][endY] << '\n';
    }

}