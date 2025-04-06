#include <bits/stdc++.h>
using namespace std;

int N;
int arr[1000001];
int nge[1000001];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }

    stack<int> S;
    for(int i=N-1; i>=0; i--){
        while(!S.empty() && S.top() <= arr[i]){
            S.pop();
        }
        if(S.empty()){
            nge[i] = -1;
        } else {
            nge[i] = S.top();
        }
        S.push(arr[i]);
    }

    for(int i=0; i<N; i++){
        cout << nge[i] << ' ';
    }
}   