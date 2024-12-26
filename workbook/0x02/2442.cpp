#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int max = 2*N-1;

    for(int i=0; i<N; i++){
        int stars = 2*(i+1)-1;
        for(int j=0; j<(max-stars)/2; j++){
            cout << ' ';
        }
        for(int j=0; j<stars; j++){
            cout << '*';
        }
        cout << "\n";
    }
}