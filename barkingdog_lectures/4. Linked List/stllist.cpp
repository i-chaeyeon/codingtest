#include <bits/stdc++.h>
using namespace std;

int main(void){
    list<int> L = {1,2};
    list<int>::iterator t = L.begin(); //t는 1을 가리키는 중 (L의 시작을)
    L.push_front(10); // {10, 1, 2}
    cout << *t << '\n'; //여전히 1을 가리키는 중
    L.push_back(5); // {10, 1, 2, 5}
    L.insert(t, 6); // {10, 6, 1, 2, 5} (t가 가리키는 곳 앞에 삽입)
    t++; //t를 전진시켜 2를 가리키게 함
    t = L.erase(t); //t가 가리키는 값을 지우고, 그 다음 원소를 가리키게 함
    cout << *t << '\n'; //2가 지워지고 다음 원소인 5를 가리킴

    for(auto i : L)
        cout << i << ' ';
    cout << '\n';
    
    // 구현한 linked list는 제일 앞이 dummy
    // stl list는 제일 뒤가 dummy (L.end())
    for(list<int>::iterator it = L.begin(); it != L.end(); it++)
        cout << *it << ' ';

}