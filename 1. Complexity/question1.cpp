#include <bits/stdc++.h>
using namespace std;

//** O(N)
// int func1(int N){
//     int result = 0;

//     for (int i=1; i<=N; i++){
//         if( (i%3==0) || (i%5==0) )
//             result += i;
//     }

//     return result;
// }


//** O(1) 포함 배제의 원리
// (#N 이하 3의 배수) + (#N 이하 5의 배수) - (#N 이하 3&5의 배수)
int func1(int N){
    int result = 0;
    result = 3*(N/3*(N/3+1)/2) + 5*(N/5*(N/5+1)/2) - 15*(N/15*(N/15+1)/2);
    return result;
}


int main(){
 cout << func1(16) << std::endl;
 cout << func1(34567) << std::endl;
 cout << func1(27639) << std::endl;
 return 0;
}