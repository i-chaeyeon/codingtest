#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1000001];
int vis[1001];
int N, M;
queue<int> Q;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;
    for(int i=0; i<M; i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int ans = 0;
    for(int i=1; i<=N; i++){
        if(!vis[i]){
            Q.push(i);
            vis[i]=1;
            
            while(!Q.empty()){
                int cur = Q.front(); Q.pop();
                for(auto next : adj[cur]){
                    if(vis[next]) continue;
                    vis[next] = 1;
                    Q.push(next);
                }
            }

            ans++;
        }
    }

    cout << ans;
}