#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[101][101];
int vis[101][101];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    // board 초기화
    for(int i=0; i<N; i++){
        string s;
        cin >> s;
        for(int j=0; j<N; j++){
            board[i][j] = s[j]-'A'; // R : 17, G : 6, B : 1
        }
    }

    // 색약이 아닌 구역
    int notcolorblind = 0;
    queue<pair<int,int>> Q;

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(vis[i][j] != 1){
                notcolorblind++;
                Q.push({i,j});
                vis[i][j] = 1;
                while(!Q.empty()){
                    auto cur = Q.front(); Q.pop();
                    for(int dir=0; dir<4; dir++){
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if(nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
                        if(vis[nx][ny] == 1 || board[nx][ny] != board[cur.X][cur.Y]) continue;
                        vis[nx][ny] = 1;
                        Q.push({nx, ny});
                    }
                }
            }
        }
    }

    // vis 배열 초기화
    for(int i=0; i<N; i++){
        fill(vis[i], vis[i]+N, 0);
    }

    int colorblind = 0;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(vis[i][j] != 1){
                colorblind++;
                Q.push({i,j});
                vis[i][j] = 1;
                while(!Q.empty()){
                    auto cur = Q.front(); Q.pop();
                    for(int dir=0; dir<4; dir++){
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if(nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
                        if(vis[nx][ny] == 1) continue;
                        if(board[cur.X][cur.Y] == 17 || board[cur.X][cur.Y] == 6){ // R 또는 G일때
                            if(board[nx][ny] == 1 ) continue;
                        } else { // B일때
                            if(board[nx][ny] != board[cur.X][cur.Y]) continue;
                        }
                        vis[nx][ny] = 1;
                        Q.push({nx, ny});
                    }
                }
            }
        }
    }

    cout << notcolorblind << ' ' << colorblind;
    
}

