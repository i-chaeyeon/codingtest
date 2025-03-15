#include <bits/stdc++.h>
using namespace std;

// 상태공간트리를 백트래킹으로 순회하며 풀이
// 비어있는 리스트에서 시작해 수를 하나씩 추가하며 수열이 완성되면 출력
// 출력되면 이전의 상태로 돌아가 다른 경우의 수
// 모든 경우의 수를 반복할 때까지 출력

int n, m;
int arr[10]; // 수열을 담을 배열
bool isused[10]; // 특정 수가 쓰였는지를 true 혹은 false로 나타내는 배열

void func(int k){ // 현재 k개까지 수를 택했음
    if (k==m){ // m개까지 모두 택했으면
        for(int i=0; i<m; i++){
            cout << arr[i] << ' '; // arr에 기록해둔 수를 출력
        cout << "\n";
        return;
        }
    }

    for(int i=1; i<=n; i++){ // 1부터 n까지의 수에 대해 
        if(!isused[i]){ // 아직 i가 사용되지 않았으면
            arr[k] = i; // k번째 수는 i가 됨
            isused[i] = 1; // i가 사용되었다는 표시를 남기고
            func(k+1); // 다음 수를 정하러 한 단계 더 들어감
            isused[i] = 0; // k번째 수가 i가 되면 모든 경우를 확인함
        }
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
     
    cin >> n >> m;
    func(0);
}