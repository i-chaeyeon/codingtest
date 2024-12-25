#include <bits/stdc++.h>
using namespace std;

// ** O(sqrt(N))
// int func3(int N){
//     int i = 1;
//     while(i*i <= N){
//         i++;
//         if(i*i == N)
//             return 1;
//     }
//     return 0;
// }

// ** O(logN)
// Binary Search
int func3(int N){
    int tail = 1;
    int head = N;
    while (tail<=head){
        int bin = tail+(head-tail)/2; //5
        // overflow 방지를 위해 곱셈이 아닌 나눗셈으로 판별
        if (N/bin == bin && N%bin == 0){
            return 1;
        } else if (N/bin > bin){ 
            tail = bin + 1;
        } else { 
            head = bin - 1;
        }
    }
    return 0;
}

int main(){
    cout << func3(9) << endl;
    cout << func3(693953651) << endl;
    cout << func3(756580036) << endl;
}