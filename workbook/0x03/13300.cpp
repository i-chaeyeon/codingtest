#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    //N: 학생 수, K: 방 최대 인원 수
    int N, K;
    cin >> N >> K;

    int girls[7] = {0,};
    int boys[7] = {0,};

    for(int i=0; i<N; i++){
        //S: 여자 0 남자 1, Y: 학년
        int S, Y;
        cin >> S >> Y;
        if(S == 0){
            girls[Y]++;
        } else {
            boys[Y]++;
        }
    } 

    int rooms = 0;
    for(int i=1; i< 7; i++){
        if(girls[i]%K) {
            girls[i] -= girls[i]%K;
            rooms++;
        }
        if(boys[i]%K) {
            boys[i] -= boys[i]%K;
            rooms++;
        }
        rooms += girls[i]/K;
        rooms += boys[i]/K;
    }
    cout << rooms;
}