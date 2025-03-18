#include <bits/stdc++.h>
using namespace std;

// N까지 자연수 중에서 M개를 고른 수열

int n, m;
int arr[8];
int num;

void func(int selected){
    // 종료 조건
    if(selected == m){
        for(int i=0; i<m; i++){
            cout << arr[i] << ' ';
        }
        cout << "\n";
        return;
    }

    // 재귀 조건
    for(int i=1; i<=n; i++){
        arr[selected] = i;
        func(selected+1);
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    func(0);
}