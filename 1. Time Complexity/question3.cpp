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
int func3(int N){
    int tail = 1;
    int head = N;
    while (tail<head){
        int bin = (head+tail)/2; //5, 
        if (bin*bin < N){

        } else if (bin*bin > N){

        } else 
            return 1;
    }
}

int main(){
    cout << func3(9) << endl;
    cout << func3(693953651) << endl;
    cout << func3(756580036) << endl;
}