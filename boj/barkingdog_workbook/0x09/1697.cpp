#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int dist[100002];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, K;
    cin >> N >> K; //수빈 N, 동생 K

    // 1초 후에 X-1 또는 X+1로, 1초 후에 2*X의 위치로
    fill(dist, dist+100001, -1);
    dist[N] = 0;
    queue<int> Q;
    Q.push(N);

    while(dist[K] == -1){
        int cur = Q.front(); Q.pop();
        for(int nxt : {cur-1, cur+1, 2*cur} ){
            if(nxt < 0 || nxt > 100000) continue;
            if(dist[nxt] != -1) continue;
            dist[nxt] = dist[cur]+1;
            Q.push(nxt);
        }
    }
    cout << dist[K];

}