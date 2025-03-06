#include <bits/stdc++.h>
using namespace std;

void func1(vector<int> v){ //STL을 쌩으로 함수 인자에 넣으면 복사본이 생김
    v[10] = 7;
}

void func2(vector<int>& v){ //'&(참조자)' 를 사용해 복사본 대신 참조 대상의 주소를 넘겨줌 
    v[10] = 7;
}

int main(){
    vector<int> v(100);
    func2(v);
    cout << v[10] << endl;
}