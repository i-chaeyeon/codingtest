#include <bits/stdc++.h>
using namespace std;

// int main(void){
//     string s;
//     cout << "input: " ;
//     cin >> s; //띄어쓰기 전까지만 읽을 수 있음
//     cout << "s is " << s << endl;
//     return 0;
// }

int main(void){
    string s;
    cout << "input: ";
    getline(cin, s); //line 전체를 받음 --- ** 반드시 C++의 string인 경우만 가능
    cout << "s is " << s << endl;
    return 0;
}