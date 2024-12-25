#include <bits/stdc++.h>
using namespace std;

int main(void){
    vector<int> v1(3, 5); // {5, 5, 5}
    cout << v1.size() << '\n';
    v1.push_back(7); // {5, 5, 5, 7}, O(1)

    vector<int> v2(2); // {0, 0}
    v2.insert(v2.begin()+1, 3); // {0, 3, 0} , O(N)

    vector<int> v3 = {1, 2, 3, 4};
    v3.erase(v3.begin()+2); // {1, 2, 4}, O(N)

    vector<int> v4; // {}
    v4 = v3; // {1, 2, 4}, deep copy되어 v4를 바꿔도 v3에는 영향을 주지 않음
    cout << v4[0] << v4[1] << v4[2] << '\n';
    v4.pop_back(); // {1, 2}, O(1)
    v4.clear(); {}
}