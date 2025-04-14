#include <bits/stdc++.h>
using namespace std;
int N, M;
int arr[100001];
int sumArr[100001];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    for(int i=1; i<=N; i++){
        cin >> arr[i];
        if(i==1) sumArr[i] = arr[i];
        else sumArr[i] = arr[i] + sumArr[i-1];
    }

    for(int i=0; i<M; i++){
        int a, b;
        cin >> a >> b;
        cout << sumArr[b]-sumArr[a-1] << "\n";
    }
}