#include <bits/stdc++.h>
using namespace std;
int N, M; // 듣도 못한 사람의 수 N, 보도 못한 사람의 수 M
map<string, int> m;
string ans[500001];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    for(int i=0; i<N; i++){
        string s;
        cin >> s;
        m[s]++;
    }

    int idx = 0;
    for(int i=0; i<M; i++){
        string s;
        cin >> s;
        if(m[s]){
            ans[idx++] = s;
        }
    }
    cout << idx << "\n";
    sort(ans, ans+idx);
    for(int i=0; i<idx; i++){
        cout << ans[i] << "\n";
    }
}