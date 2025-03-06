#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);


    // testcase 개수
    int T;
    cin >> T;

    string arr[6] = {"red", "orange", "yellow", "green", "blue", "purple"};
     
    for(int i=0; i<T; i++){
        string s, t;
        cin >> s >> t;
        
        int num1, num2;
        for(int j=0; j<6; j++){
            if(arr[j] == s){
                num1 = j;
            } 
            if (arr[j] == t){
                num2 = j;
            }
        }
        
        if (num1 == num2){
            cout << "E\n";
        } else if ( abs(num1-num2) == 1 || abs(num1-num2) == 5){ // 색상환에서 인접
            cout << "A\n";
        } else if ( num1%3 == num2%3 ){ // 색상환에서 반대
            cout << "C\n";
        } else {
            cout << "X\n";
        }
    }
}


// #include <bits/stdc++.h>
// using namespace std;

// map<string, int> colorIndex = {
//     {"red", 0}, {"orange", 1}, {"yellow", 2},
//     {"green", 3}, {"blue", 4}, {"purple", 5}
// };

// char getRelation(int num1, int num2) {
//     if (num1 == num2) return 'E';
//     if (abs(num1 - num2) == 1 || abs(num1 - num2) == 5) return 'A';
//     if (num1 % 3 == num2 % 3) return 'C';
//     return 'X';
// }

// int main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);

//     int T;
//     cin >> T;

//     while (T--) {
//         string s, t;
//         cin >> s >> t;

//         int num1 = colorIndex[s];
//         int num2 = colorIndex[t];

//         cout << getRelation(num1, num2) << '\n';
//     }
// }