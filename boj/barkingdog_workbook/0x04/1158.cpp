#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, K;
    cin >> N >> K;

    vector<int> V;
    vector<int> result;

    for(int i=0; i<N; i++){
        V.push_back(i+1);
    }
    
    for(int i=0; result.size()<N; i++){
        if(i % K == K-1) result.push_back(V[i]);
        else V.push_back(V[i]);
    }

    cout << '<';
    for(int i=0; i<N; i++){
        if(i==N-1) {
            cout << result[i]; 
            break;
        }
        cout << result[i] << ", ";
    }
    cout << '>';
}   