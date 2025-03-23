#include <bits/stdc++.h>
using namespace std;

int N, M;
int arr[9]; // 1 7 8 9

bool used[9]; // t f f f 
int ans[9]; // 1 7

void func(int cur, int idx){
    // 종료 조건
    if(cur == M){
        for(int i=0; i<M; i++){
            cout << ans[i] << ' ';
        }
        cout << "\n";
        return;
    }

    // 재귀 조건
    for(int i=idx; i<N; i++){
        if(!used[i]){
            ans[cur] = arr[i];
            used[i] = true;
            cur++;
            func(cur, i+1);
            cur--;
            used[i] = false;
        }
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    for(int i=0; i<N; i++){
        cin >> arr[i];
    }
    sort(arr, arr+N);

    func(0, 0);
}