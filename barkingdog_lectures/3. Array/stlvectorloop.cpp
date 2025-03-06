#include <bits/stdc++.h>
using namespace std;

int main(void){
    vector<int> v1 = {1, 2, 3, 4, 5, 6};

    // 1. range-based for loop (since C++11)
    // e에 v1의 원소들이 하나씩 들어감
    // for (int& e : v1) 형태의 참조자로 전달할 수도 있음
    // 삼성 SW 역량테스트는 지원 안함......
    for (int e : v1){
        cout << e << ' ';
    }
        
    // 2. 
    for (int i=0; i<v1.size(); i++){
        cout << v1[i] << ' ';
    }

    // 3. 이건 사용 불가!!
    // size 메소드는 unsigned int 형태를 반환해서 overflow 날 가능성 존재
    for (int i=0; i<=v1.size()-1; i++){
        cout << v1[i] << ' ';
    }
}