#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[1001][1001];
int fire[1001][1001];
int vis[1001][1001];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for(int i=0; i<T; i++){
        //board, fire, vis 0으로 초기화
        for(int j=0; j<1001; j++){
            fill(board[j], board[j]+1000, 0);
            fill(fire[j], fire[j]+1000, 0);
            fill(vis[j], vis[j]+1000, 0);
        }

        int w, h;
        cin >> w >> h;

        queue<pair<int,int>> visQ;
        queue<pair<int,int>> fireQ;

        // board 및 시작 큐 생성
        // 벽은 -1, 그 외 1
        for(int j=0; j<h; j++){
            for(int k=0; k<w; k++){
                char c;
                cin >> c;
                if(c == '#'){ 
                    board[j][k] = -1;
                } else if (c == '@'){
                    board[j][k] = 1;
                    visQ.push({j,k});
                    vis[j][k] = 1;
                } else if (c == '.'){
                    board[j][k] = 1;
                    fireQ.push({j,k});
                    fire[j][k] = 1;
                }
            }
        }

        while(!fireQ.empty()){
            auto cur = fireQ.front(); fireQ.pop();
            for(int dir=0; dir<4; dir++){
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];
                if(nx < 0 || nx >= w || ny < 0 || ny >= h) continue;
                if(board[nx][ny] == -1 || fire[nx][ny] != 0) continue;
                fire[nx][ny] = fire[cur.X][cur.Y] + 1;
                fireQ.push({nx, ny});
            }
        }

        for(int j=0; j<h; j++){
            for(int k=0; k<w; k++){
                cout << fire[j][k];
            }
            cout << "\n";
        }


        while(!visQ.empty()){
            int isOut = 0;
            auto cur = visQ.front(); visQ.pop();
            for(int dir=0; dir<4; dir++){
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];
                if(board[nx][ny] == 0){
                    isOut = 1;
                    cout << vis[cur.X][cur.Y] << "\n";
                    break;
                }
                if(nx < 0 || nx >= w || ny < 0 || ny >= h) continue;
                if(board[nx][ny] == -1 || vis[nx][ny] != 0 || fire[nx][ny] <= vis[nx][ny]) continue;
                vis[nx][ny] = vis[cur.X][cur.Y] + 1;
                visQ.push({nx, ny});
            }
            if(isOut == 1) break;
        }

        for(int j=0; j<h; j++){
            for(int k=0; k<w; k++){
                cout << vis[j][k];
            }
            cout << "\n";
        }

    }
}