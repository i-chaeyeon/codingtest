#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
#define MAX_CCTV 8

// 남 동 북 서 방향 순서대로
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int N, M;
int board1[10][10]; // 사무실의 모양
int board2[10][10]; // cctv의 방향을 정하고 감시 영역을 7로 표시

vector<pair<int,int>> cctv; // cctv의 좌표를 저장

// board 내부에 있는지 확인
bool OOB(int a, int b){
    return a < 0 || a >= N || b < 0 || b >= M;
}

// (x,y)에서 dir 방향으로 진행하며 벽을 만날때까지 모든 칸을 7로 바꿈
void upd(int x, int y, int dir){
    dir %= 4;
    while(1){
        x += dx[dir];
        y += dy[dir];
        if(OOB(x,y) || board2[x][y] == 6 ) return; // 벽
        if(board2[x][y] != 0) continue; // cctv
        board2[x][y] = 7;
    }
}


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;
    
    int mn = 0; // 사각지대의 최소 크기 

    // board 초기화
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> board1[i][j];
            if(board1[i][j] != 0 && board1[i][j] != 6){
                cctv.push_back({i,j});
            }
            if(board1[i][j] == 0) mn++; // 최초 board의 0의 개수
        }
    }

    for(int tmp=0; tmp < (1<<(2*cctv.size())); tmp++){

        // board 2에 board 1을 복사
        for(int i=0; i<N; i++){
            for(int j=0; j<M; j++){
                board2[i][j] = board1[i][j];
            }
        }
        int brute = tmp;
        for(int i=0; i<cctv.size(); i++){
            int dir = brute%4;
            brute /= 4;
            
            int x = cctv[i].X;
            int y = cctv[i].Y;

            if(board1[x][y] == 1){
                upd(x,y,dir);
            } else if (board1[x][y] == 2){
                upd(x,y,dir);
                upd(x,y,dir+2);
            } else if (board1[x][y] == 3){
                upd(x,y,dir);
                upd(x,y,dir+1);
            } else if (board1[x][y] == 4){
                upd(x,y,dir);
                upd(x,y,dir+1);
                upd(x,y,dir+2);
            } else {
                upd(x,y,dir);
                upd(x,y,dir+1);
                upd(x,y,dir+2);
                upd(x,y,dir+3);
            }
        }

        int val = 0;
        for(int i=0; i<N; i++){
            for(int j=0; j<M; j++){
                val += (board2[i][j] == 0);
            }
        }
        mn = min(mn, val);
    }
    cout << mn;

}