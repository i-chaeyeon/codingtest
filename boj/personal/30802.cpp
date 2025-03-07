#include <bits/stdc++.h>
using namespace std;

int shirts[6];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for(int i=0; i<6; i++){
        cin >> shirts[i];
    }

    int T, P;
    cin >> T >> P;

    int setT = 0;
    for(int i=0; i<6; i++){
        setT += shirts[i]/T;
        if(shirts[i]%T != 0)
            setT++;
    }
    cout << setT << "\n";
    cout << N/P << " " << N%P;
}