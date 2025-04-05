#include <bits/stdc++.h>
using namespace std;

int N, M; // 포켓몬의 개수 N이랑 내가 맞춰야 하는 문제의 개수 M
map<string, int> pokemon;
string arr[100001];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N >> M;
    for(int i=0; i<N; i++){
        string s;
        cin >> s;
        pokemon.insert({s, i+1});
        arr[i] = s;
    }

    for(int i=0; i<M; i++){
        string s;
        cin >> s;

        if(isdigit(s[0])){
            cout << arr[stoi(s)-1] << "\n";
        } else {
            cout << pokemon[s] << "\n";
        }
    }


}