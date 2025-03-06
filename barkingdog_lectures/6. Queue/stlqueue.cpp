#include <bits/stdc++.h>
using namespace std;

int main(void){
    queue<int> Q;
    Q.push(10);
    Q.push(20);
    Q.push(30);
    cout << Q.size() << "\n"; // 3

    if(Q.empty()) cout << "Q is empty \n";
    else cout << "Q is not empty \n"; // 10 20 30

    Q.pop(); // 20 30
    cout << Q.front() << "\n"; // 20
    cout << Q.back() << "\n"; // 30
    
    Q.push(40); // 20 30 40
    Q.pop(); // 30 40

    cout << Q.front() << "\n"; // 30
    cout << Q.back() << "\n"; // 40
}

// QUEUE 비어있을 때 front, back, pop 호출 주의! (런타임 에러)