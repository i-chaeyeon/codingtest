#include <bits/stdc++.h>
using namespace std;

int main(void){

    ios::sync_with_stdio(0);
    cin.tie(0);

    unordered_map<long long, int> H;

    int N;
    cin >> N;

    long long card = 0;

    for(int i=0; i<N; i++){
        cin >> card;
        H[card]++;
    }

    int M;
    cin >> M;

    for(int i=0; i<M; i++){
        cin >> card;
        cout << H[card] << " ";
    }

}