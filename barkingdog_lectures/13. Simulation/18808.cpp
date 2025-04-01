#include <bits/stdc++.h>
using namespace std;

int N, M, K; //세로, 가로, 스티커 개수
int R, C; //스티커 세로, 가로

int board[41][41]; //노트북
int sticker[11][11]; //스티커

void rotate(){
    int tmp[11][11];
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            tmp[i][j] = sticker[i][j];
        }
    }

    for(int i=0; i<C; i++){
        for(int j=0; j<R; j++){
            sticker[i][j] = tmp[R-1-j][i];
        }
    }
    swap(R,C);
}

bool pastable(int x, int y){
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            if(board[x+i][y+j] == 1 && sticker[i][j] == 1)
                return false;
        }
    }

    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            if(sticker[i][j] == 1){
                board[x+i][y+j] = 1;
            }
        }
    }
    return true;
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M >> K;

    int sum = 0;
    for(int i=0; i<K; i++){
        cin >> R >> C;

        int cnt = 0;
        for(int j=0; j<R; j++){
            for(int k=0; k<C; k++){
                cin >> sticker[j][k];
                if(sticker[j][k] == 1) cnt++;
            }
        }

        for(int dir=0; dir<4; dir++){
            bool attached = false;

            for(int x=0; x<= N-R; x++){
                if(attached) break;
                for(int y=0; y <= M-C; y++){
                    if(pastable(x,y)) {
                        attached = true;
                        break;
                    }
                }
            }

            if(!attached) rotate();
            if(attached){
                sum += cnt;
                break;
            }
        }
    }

    cout << sum;
}