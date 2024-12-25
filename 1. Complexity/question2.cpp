#include <bits/stdc++.h>
using namespace std;

// ** O(N^2)
// int func2(int arr[], int N){
//     for(int i=0; i<N; i++){
//         for(int j=i+1; j<N; j++){
//             if (arr[i]+arr[j] == 100){
//                 return 1;
//             }
//         }
//     }
//     return 0;
// }

// ** O(N)
int func2(int arr[], int N){
    short int occur[101] = {0,};
    for (int i=0; i<N; i++){
        if(occur[100-arr[i]] == 1){
            return 1;
        }
        occur[arr[i]] = 1;
    }
    return 0;
}

int main(){
    int arr1[3] = {1,52,48};
    cout << func2(arr1, 3) << endl;
    int arr2[2] = {50,42};
    cout << func2(arr2, 2) << endl;
    int arr3[4] = {4,13,63,87};
    cout << func2(arr3, 4) << endl;

}