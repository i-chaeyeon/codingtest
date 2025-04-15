#include <bits/stdc++.h>
using namespace std;
int N;
int board[129][129];
int white, blue;

void find(int xstart, int ystart, int N){
    // termination
    

    // recursive
    int color = board[xstart][ystart];
    for (int i = xstart; i < xstart + N; i++) {
        for (int j = ystart; j < ystart + N; j++) {
            if(board[i][j] != color){
                find(xstart, ystart, N/2);
                find(xstart, ystart+N/2, N/2);
                find(xstart+N/2, ystart, N/2);
                find(xstart+N/2, ystart+N/2, N/2);
                return;
            }
        }

    }

    if(color==0){
        white++;
    } else {
        blue++;
    }
}


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> board[i][j];
        }
    }

    find(0,0,N);
    cout << white << "\n" << blue;
}