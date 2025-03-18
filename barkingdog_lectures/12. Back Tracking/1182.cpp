#include <bits/stdc++.h>
using namespace std;

int n, s;
int arr[30]; // 전체 수열이 담길 배열
int cnt = 0; // 원소를 다 더한 값이 s가 되는 경우의 수

void func(int cur, int tot){ // cur: 현재 원소의 인덱스, tot: 현재까지의 합
    if(cur == n){
        if (tot==s) 
            cnt++;
        return;
    }

    func(cur+1, tot);
    func(cur+1, tot+arr[cur]);
}


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> s;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    func(0,0);

    if(s==0)
        cnt--; // 공집합인 경우를 제외
    
    cout << cnt;
}