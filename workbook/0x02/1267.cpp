#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    int Y = 0;
    int M = 0;

    cin >> N;

    for(int i=0; i<N; i++){
        int time = 0;
        cin >> time;
        //영식이는 30초에 10원씩
        Y += (int)time/30 +1;

        //민식이는 60초에 15원씩
        M += (int)time/60 +1;
    }

    Y *= 10;
    M *= 15;

    if (Y<M) cout << "Y " << Y ;
    else if (Y>M) cout << "M " << M ;
    else if (Y==M) cout << "Y M " << Y;
}