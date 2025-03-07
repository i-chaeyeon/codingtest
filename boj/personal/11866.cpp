#include <bits/stdc++.h>
using namespace std;


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<int> Q;

    int N, K;
    cin >> N >> K;

    for(int i=0; i<N; i++){
        Q.push(i+1);
    }

    cout << "<";
    while(!Q.empty()){

        for(int i=0; i<K-1; i++){
            Q.push(Q.front());
            Q.pop();
        }
        cout << Q.front();
        Q.pop();

        if(Q.size() !=0)
            cout << ", ";
    }
    cout << ">";

}