// a^b mod c

#include <bits/stdc++.h>
using namespace std;

// main idea:
// a^n * a^n = a^2n
// 따라서 a^2n의 mod 연산을 하고싶으면 a^n의 mod 연산을 먼저 하면 됨!

long long func1(long long a, long long b, long long c){
    if(b == 1) return a % c; // 종료 조건
    long long val = func1(a, b/2, c);
    val = val * val % c;
    if(b%2 == 0) return val;
    return val * a % c;
}

int main(void){
    long long a, b, c;
    cin >> a >> b >> c;
    cout << func1(a,b,c);

}

// -> 시간복잡도 : O(log b)