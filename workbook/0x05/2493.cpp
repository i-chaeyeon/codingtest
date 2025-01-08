#include <bits/stdc++.h>
using namespace std;

stack<pair<int, long long>> S;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for(int i=0; i<N; i++){
        int tower;
        cin >> tower;


        // 스택 비어있으면 페어 푸시
        // 스택 안 비어있으면 제일 위에 숫자 비교
        //    들어오는 숫자보다 크면 인덱스 출력 후 들어오는 페어 푸시
        //    들어오는 숫자보다 작으면 팝

        while(!S.empty()){
            if(S.top().second > tower){
                cout << S.top().first << ' ';
                S.push({i+1, tower});
                break;
            } else {
                S.pop();
            }
        }
            
        if(S.empty()){
            cout << "0 ";
            S.push({i+1, tower});
        } 
    } 


    
}