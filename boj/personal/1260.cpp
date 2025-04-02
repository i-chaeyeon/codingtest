#include <bits/stdc++.h>
using namespace std;

int N, M, V;
int vis[1001];
int edges[1001][1001];

void DFS(int V) {
    stack<int> S;
    S.push(V);

    while (!S.empty()) {
        int cur = S.top(); S.pop();

        if (vis[cur]) continue;
        vis[cur] = 1;
        cout << cur << ' ';

        for (int i = N; i >= 1; i--) {
            if (edges[cur][i] == 1 && vis[i] == 0) {
                S.push(i);
            }
        }
    }
}

void BFS(int V){
    queue<int> Q;
    Q.push(V);

    while(!Q.empty()){
        int cur = Q.front(); Q.pop();
        vis[cur] = 1;
        cout << cur << ' ';

        for(int i=1; i<N+1; i++){
            if(edges[cur][i] == 1 && vis[i] == 0){
                Q.push(i);
                vis[i] = 1;
            }
        }
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M >> V;

    for(int i=0; i<M; i++){
        int x, y;
        cin >> x >> y;
        edges[x][y] = 1;
        edges[y][x] = 1;
    }

    DFS(V);
    cout << "\n";

    memset(vis, 0, sizeof(vis));

    BFS(V);
}