#include <bits/stdc++.h>
using namespace std;
#define M first
#define N second

int board[51][51];
int vis[51][51];

int dn[4] = {1, 0, -1, 0};
int dm[4] = {0, 1, 0, -1};

int main(void){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int T, M, N, K, X, Y;
    cin >> T; // 테스트케이스 개수

    for(int i=0; i<T; i++){
        // board 초기화
        for(int j=0; j<51; j++){
            fill(board[j], board[j]+50, -1);
            fill(vis[j], vis[j]+50, -1);
        }
        cin >> M >> N >> K; //가로, 세로, 배추 개수
        // board에 배추 입력
        for(int j=0; j<K; j++){
            cin >> X >> Y;
            board[X][Y] = 1;
        }

        // BFS - 시작점이 여러개인 BFS
        int cnt = 0;
        queue<pair<int,int>> Q;

        for(int j=0; j<M; j++){
            for(int k=0; k<N; k++){
                if(board[j][k] == 1 && vis[j][k] == -1) {
                    board[j][k] = -1;
                    vis[j][k] = 1;
                    Q.push({j,k});
                    while(!Q.empty()){
                        pair<int, int> cur = Q.front(); Q.pop();
                        for(int dir=0; dir<4; dir++){
                            int nm = cur.M + dm[dir];
                            int nn = cur.N + dn[dir];
                            if(nm >= M || nm <0 || nn >= N || nn<0) continue;
                            if(board[nm][nn] != 1 || vis[nm][nn] == 1) continue;
                            Q.push({nm,nn});
                            board[nm][nn] = -1;
                            vis[nm][nn] = 1;
                        }
                    }
                    cnt++;
                }
            }
        }

        cout << cnt << '\n';


    }

}