#include <bits/stdc++.h>
using namespace std;

stack<int> s;
vector<char> v;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int num = 0; //입력될 숫자
    int cur = 1; //트래킹

    for(int i=0; i<N; i++){
        cin >> num; // 1 2 5 3
        while(cur<=num){
            s.push(cur++); // 3 4 5
            v.push_back('+');
        }
        if(s.top() != num){
            cout << "NO\n";
            return 0;
        }
        s.pop(); // 3 
        v.push_back('-');
    }

    for (auto c : v){
        cout << c << "\n";
    }
}