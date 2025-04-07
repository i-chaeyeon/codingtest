#include <bits/stdc++.h>
using namespace std;

int N, M;
int arr1[1000001];
int arr2[1000001];
int ans[2000002];

int main(void){

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;
    for(int i=0; i<N; i++){
        cin >> arr1[i];
    }
    for(int i=0; i<M; i++){
        cin >> arr2[i];
    }

    int idx1 = 0;
    int idx2 = 0;
    for(int i=0; i<N+M; i++){
        if(idx1 == N){
            ans[i] = arr2[idx2++];
            continue;
        } else if(idx2 == M){
            ans[i] = arr1[idx1++];
            continue;
        }
        if(arr1[idx1] < arr2[idx2]){
            ans[i] = arr1[idx1++];
        } else {
            ans[i] = arr2[idx2++];
        }
    }
    
    for(int i=0; i<N+M; i++){
        cout << ans[i] <<' ';
    }
}