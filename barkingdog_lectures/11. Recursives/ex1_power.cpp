// a^b mod m

#include <bits/stdc++.h>
using namespace std;

// func1: 기댓값 1 / 출력값 0
// 다른 출력의 이유: integer overflow (line 10)
int func1(int a, int b, int m){
    int val = 1;
    while(b--) val *= a;
    return val % m;
}

// func2: func1의 문제를 보완
// long long으로 타입 변환
// a가 곱해질 때마다 나머지를 계산해 작은 수로 연산하도록 설계
// -> O(b) 
long long func2(int a, int b, int m){
    long long val = 1;
    while(b--) val = val * a % m;
    return val;
}

int main(void){
    int result;
    result = func1(6, 100, 5);
    cout << result;
    result = func2(6, 100, 5);
    cout << result;
}