#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long A, B; // 10^10 정도까지만 int 사용. 넘어가니까 long long
    cin >> A >> B;

    if(A>B) swap(A,B);

    if(A==B){
        cout << 0 << "\n";
        return 0;
    }
    long long times = B-A-1;
    cout << times << "\n";
    for(long long i=0; i<times; i++){
        cout << A+1+i << ' ';
    }
}