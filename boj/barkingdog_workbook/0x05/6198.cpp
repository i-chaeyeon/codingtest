#include <bits/stdc++.h>
using namespace std;

stack<long long> S;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    long long ans = 0;

    for(int i=0; i<N; i++){
        long long building;
        cin >> building;

        // 스택 비어있으면 푸시
        // 스택 안 비어있으면 제일 위에 원소랑 비교
        //     제일 위에 원소보다 작으면 푸시, 스택 크기만큼 +
        //     제일 위에 원소보다 크면 맞는 자리 찾을때까지 팝
        while(!S.empty()){
            if(building < S.top()){
                ans += S.size();
                S.push(building);
                break;
            }  else {
                S.pop();
            }
        }

        if(S.empty()){
            S.push(building);
        }
    }

    cout << ans;
}