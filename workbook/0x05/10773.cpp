#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;

    stack<int> S;

    for(int i=0; i<N; i++){
        int num;
        cin >> num;
        if(num != 0) S.push(num);
        else S.pop();
    }

    int sum = 0;
    while(!S.empty()){
        sum += S.top();
        S.pop();
    }

    cout << sum;

}