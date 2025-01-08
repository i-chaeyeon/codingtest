#include <bits/stdc++.h>
using namespace std;

queue<int> Q;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for(int i=1; i<N+1; i++){
        Q.push(i);
    }

    while(Q.size() != 1){
        Q.pop();
        Q.push(Q.front());
        Q.pop();
    }
    
    cout << Q.front() ;
}