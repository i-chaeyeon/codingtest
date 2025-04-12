#include <bits/stdc++.h>
using namespace std;

int N, M; // N: 컴퓨터 수 M: 컴퓨터 쌍의 수
bool vis[101];
vector<int> adj[101];
int cnt;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    // adjacency list로 그래프 구현 
    for(int i=0; i<M; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }   

    queue<int> Q;
    vis[1] = true;
    Q.push(1);

    while(!Q.empty()){
        int cur = Q.front(); Q.pop();

        for(int next : adj[cur]){
            if(vis[next]==true) continue;
            Q.push(next);
            vis[next]=true;
            cnt++;
        }
    }

    cout << cnt;
}



// 그래프 -> 인접 리스트 (adjacency list)로 구현

// vector<int> adj[101];
// adj[1].push_back(2); // 1번과 2번 연결
// adj[2].push_back(1); // 양방향이면 둘 다 넣음

// 조회 시
//for (int next : adj[cur]) {
//     // cur에서 연결된 모든 next 노드를 순회
//     if (!visited[next]) {
//         visited[next] = true;
//         dfs(next); // 또는 큐에 넣기
//     }
// }