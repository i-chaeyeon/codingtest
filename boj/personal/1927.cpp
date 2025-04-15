#include <bits/stdc++.h>
using namespace std;
int N, x; //연산의 개수 N, 연산에 대한 정보를 나타내는 정수 x
priority_queue<int, vector<int>, greater<int>> pq;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i=0; i<N; i++){
        cin >> x;
        if(x==0){
            if(!pq.empty()){
                cout << pq.top() << "\n"; pq.pop();
            } else {
                cout << 0 << "\n";
            }
        } else {
            pq.push(x);
        }
    }
}


// Priority Queue의 구현
// priority_queue<int> pq; --> Max값이 top을 유지
// priority_queue<int, vector<int>, greater<int>> pq; --> Min값이 top을 유지
// 구조: int형 변수들을 greater<int> 우선순위에 따라 정렬하는 우선순위 큐