#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for(int i=N; i>0; i--){
        for(int j=0; j<(2*N-2*i+1)/2; j++){
            cout << ' ';
        }
        for(int j=0; j<2*i-1; j++){
            cout << '*';
        }
        cout << "\n";
    }

    for(int i=0; i<N-1; i++){
        for(int j=0; j<N-(i+1)-1; j++){
            cout << ' ';
        }
        for(int j=0; j<2*(i+1)+1; j++){
            cout << '*';
        }
        cout << "\n";
    }
}