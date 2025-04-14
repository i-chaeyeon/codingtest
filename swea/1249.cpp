#include <iostream>
#include <stdio.h>
#include <queue>

using namespace std;

int N;
int board[101][101];
int dist[101][101];
queue<pair<int,int>> Q;
int ans;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void init_all(){
    N = 0;
    ans = 0;
    for(int i=0; i<101; i++){
        for(int j=0; j<101; j++){
            dist[i][j] = 1e9;
        }
    }
    while(!Q.empty()) Q.pop();
}

void make_board(){
    cin >> N;
    for(int i=0; i<N; i++){
        string s;
        cin >> s;

        for(int j=0; j<N; j++){
            board[i][j] = s[j] - '0';
        }
    }
    Q.push({0,0});
    dist[0][0] = board[0][0]; // 시작점에서 걸리는 비용
}

void bfs(){
    while(!Q.empty()){
        auto cur = Q.front(); Q.pop();
        for(int dir=0; dir<4; dir++){
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if(nx<0 || nx >=N || ny<0 || ny >=N) continue;
            if(dist[nx][ny] > dist[cur.first][cur.second] + board[nx][ny]){
                dist[nx][ny] = dist[cur.first][cur.second] + board[nx][ny];
                Q.push({nx, ny});
            }
        }
    }
}

int main(int argc, char** argv)
// int main(void)
{
	int test_case;
	int T;
	// 제출 시 주의
	// freopen("input.txt", "r", stdin);

	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{   
        init_all(); // 초기화

        make_board(); //보드 채우기

        bfs(); // bfs
	
        cout << "#" << test_case << " " << dist[N-1][N-1] << "\n";
	}
	return 0;
}