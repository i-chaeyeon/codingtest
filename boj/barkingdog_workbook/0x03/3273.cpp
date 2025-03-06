#include <bits/stdc++.h>
using namespace std;

// O(N^2)
// int main(void){
//     ios::sync_with_stdio(0);
//     cin.tie(0);

//     int N;
//     cin >> N;

//     vector<int> v;    
//     for(int i=0; i<N; i++)
//         cin >> v[i];

//     int x;
//     cin >> x;

//     int result = 0;
//     for(int i=0; i<N; i++){
//         if(v[i]>=x) continue;
//         if(find(v.begin()+(i+1), v.end(), x-v[i]) != v.end()) result++;
//     }

//     cout << result;
// }


// 투 포인터
// O(N+sorting)
// int main(void){
//     ios::sync_with_stdio(0);
//     cin.tie(0);

//     int N;
//     cin >> N;

//     vector<int> v(N, 0);

//     for(int i=0; i<N; i++)
//         cin >> v[i];

//     int x;
//     cin >> x;

//     // 투 포인터
//     int head = 0;
//     int tail = N-1;
//     sort(v.begin(), v.end());

//     int result = 0;
//     while (head<tail){
//         if(v[head]>=x) break;
//         if(x-v[head] > v[tail]) head++;
//         if(x-v[head] < v[tail]) tail--;
//         if(x-v[head] == v[tail]){
//             result++;
//             head++;
//             tail--;
//         }
//     }

//     cout << result;
// }

// 배열 확인
// O(N)
int a[1000001]={};
bool occur[2000001];
int n, x;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int ans = 0;
  cin >> n;
  for(int i = 0; i < n; i++) cin >> a[i];
  cin >> x;

  for (int i = 0; i < n; i++) {
    if(x-a[i] > 0 && occur[x-a[i]]) ans++;
    occur[a[i]] = true;
  }
  cout << ans;
}
