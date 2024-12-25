#include <bits/stdc++.h>
using namespace std;

int func4(int N){
    int result = 1;
    while(result*2 <= N){
        result *= 2;
    }
    return result;
}

int main(){
    cout << func4(5) << endl;
    cout << func4(97615282) << endl;
    cout << func4(1024) << endl;

    return 0;
}