#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    int ans = 0;
    int head = 1;
    int tail = N;

    for(int i=0; i<M; i++){
        int target;
        cin >> target;

        int second = target-1; // 1
        int third = N-second; // 9

        if(second<=third){
            head += second;
            
        }
    }
}