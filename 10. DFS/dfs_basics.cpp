#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[502][502];
int vis[502][502];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int n = 7, m = 10;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<pair<int,int>> S; //pair로 stack 선언
    vis[0][0] = 1; // 시작 지점에 방문 표시
    S.push({0,0}); // 스택에 push

    while(!S.empty()){ // 스택이 빌 때까지 반복
        pair<int,int> cur = S.top(); S.pop();
        cout << '(' << cur.X << ', ' << cur.Y << ') -> ';
        for(int dir=0; dir<4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue; // board 범위 밖인 경우 예외 처리
            if(vis[nx][ny] || board[nx][ny] != 1) continue; // 칠해지지 않은 칸일때, 방문했을때 pass
            vis[nx][ny] = 1;
            S.push({nx, ny});
        }

    }

}
