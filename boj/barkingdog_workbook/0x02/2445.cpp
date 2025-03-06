#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for(int i=0; i<N; i++){
        for(int j=0; j<i+1; j++){
            cout << '*';
        }
        for(int j=0; j<2*N-2*(i+1); j++){
            cout << ' ';
        }
        for(int j=0; j<i+1; j++){
            cout << '*';
        }
        cout << "\n";
    }
    for(int i=N-1; i>0; i--){
        for(int j=i; j>0; j--){
            cout << '*';
        }
        for(int j=0; j<2*N-2*i; j++){
            cout << ' ';
        }
        for(int j=i; j>0; j--){
            cout << '*';
        }
        cout << "\n";
    }
}