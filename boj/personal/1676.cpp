#include <bits/stdc++.h>
using namespace std;

int main(void){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int fivecnt = 0;
    int twocnt = 0;
    for(int i=N; i>0; i--){
        int tmp = i;
        while(true){
            int cur = tmp;
            if(tmp%5 == 0){
                fivecnt++;
                tmp /= 5;
            }
            if(tmp%2 == 0){
                twocnt++;
                tmp /= 2;
            }
            if(cur == tmp) break;
        }
    }

    cout << min(fivecnt, twocnt);
}