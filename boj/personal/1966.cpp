#include <bits/stdc++.h>
using namespace std;



int main(void){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for(int i=0; i<T; i++){
        int N, M;
        cin >> N >> M;
        queue<pair<int,int>> Q;
        priority_queue<int> PQ;

        // <문서 번호, 중요도>
        // <중요도>
        for(int j=0; j<N; j++){
            int num;
            cin >> num;
            Q.push({j,num});
            PQ.push(num);
        }
        
        int ans = 0;
        while(!Q.empty()){
            auto cur = Q.front(); Q.pop();

            if(PQ.top() == cur.second){
                PQ.pop();
                ans++;
                if(cur.first == M){
                    cout << ans << "\n";
                    break;
                }
            } else{
                Q.push(cur);
            }
        }
    }
}