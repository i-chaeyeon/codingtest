#include <bits/stdc++.h>
using namespace std;

stack<int> s;
vector<char> v;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int cur = 1;
    int num;
    int idx = 0;

    for(int i=0; i<N; i++){
        cin >> num; // 
        while(cur<=num){
            s.push(cur++); // 
            v[idx++] = '+';
        }
        while(s.top() != num){
            s.pop();
            v[idx++] = '-';
        }
    }

    for(auto c : v){
        cout << c << ' ';
    }
}