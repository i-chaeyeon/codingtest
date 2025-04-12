#include <bits/stdc++.h>
using namespace std;
int N;
int stairs[301];
int maxArr[301];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i=0; i<N; i++){
        cin >> stairs[i];
    }

    maxArr[0] = stairs[0];
    maxArr[1] = stairs[0] + stairs[1];
    maxArr[2] = max(stairs[0]+stairs[2], stairs[1]+stairs[2]);

    for(int i=3; i<N; i++){
        maxArr[i] = max( maxArr[i-2]+stairs[i], maxArr[i-3]+stairs[i-1]+stairs[i]);
    }

    cout << maxArr[N];
}