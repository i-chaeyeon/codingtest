#include <bits/stdc++.h>
using namespace std;
int N, M;
map<string, string> m;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;
    for(int i=0; i<N; i++){
        string s;
        cin >> s;

        string pass;
        cin >> pass;

        m.insert({s, pass});
    }

    for(int i=0; i<M; i++){
        string s;
        cin >> s;

        cout << m[s] << "\n";
    }
}