#include <bits/stdc++.h>
using namespace std;

int countArr[4001];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int sum = 0;
    int maxcnt = 0;
    for(int i=0; i<N; i++){
        int num;
        cin >> num;
        countArr[num]++;
        sum += num;
        if(maxcnt < countArr[num])
            maxcnt = countArr[num];
    }

}