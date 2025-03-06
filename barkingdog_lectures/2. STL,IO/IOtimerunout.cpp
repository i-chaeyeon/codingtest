#include <bits/stdc++.h>
using namespace std;


// 1. C stream과 C++ stream의 동기화
// 기본적으로 동기화가 되어있으나,  C++ stream만 쓸거면 동기화를 끊어버려서 프로그램 수행 시간에서 이점이 생김
// ios::sync_with_stdio(false)
// 이때 printf, scanf 섞어서 사용하면 안됨
int main(void){
    ios::sync_with_stdio(0);
    cout << "1111\n";
    printf("2222\n");
    cout << "3333\n";
    return 0;
}

// 2. Buffer 사용
// 입출력 순서가 꼬이는 것을 방지하기 위해
// cin 전에 반드시 버퍼를 비워줘야함
// cin.tie(nullptr)
// int main(void){
//     cin.tie(0);
//     cout << "1111\n";
//     printf("2222\n");
//     cout << "3333\n";
//     return 0;
// }