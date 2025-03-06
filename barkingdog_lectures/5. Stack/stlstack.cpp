#include <bits/stdc++.h>
using namespace std;

int main(void){
    stack<int> S; //스택 선언

    S.push(10);
    S.push(20);
    S.push(30);

    cout << S.size() << "\n";

    if(S.empty()) cout << "Stack is empty! \n";
    else cout << "Stack is not empty. \n";

    S.pop();
    cout << S.top() << "\n";
    S.pop();
    cout << S.top() << "\n";
    S.pop();

    if(S.empty()) cout << "Stack is empty! \n";
    else cout << "Stack is not empty. \n";
    
    //스택이 비어있을 때 pop, top 실행 시 런타임 에러 발생 
}