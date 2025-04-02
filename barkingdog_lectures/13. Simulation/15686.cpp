#include <bits/stdc++.h>
using namespace std;

int N, M; // N : 줄 개수, M : 폐업시키지 않을 치킨집 수
int town[51][51];
vector<pair<int,int>> chicken;
vector<pair<int,int>> house;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> town[i][j];
            if(town[i][j] == 1){
                house.push_back({i,j});
            } else if (town[i][j] == 2){
                chicken.push_back({i,j});
            }
        }
    }

    vector<int> brute(chicken.size(), 1);
    for(int i=0; i<chicken.size()-M; i++){
        brute[i] = 0;
    }
    int chickenDist = INT_MAX;
    do{
        int dist = 0;
        for(auto h : house){
            int tmp = INT_MAX;
            for(int i=0; i<chicken.size(); i++){
                if(brute[i] == 0) continue;
                tmp = min(tmp, abs(chicken[i].first-h.first) + abs(chicken[i].second-h.second));
            }
            dist += tmp;
        }
        if (chickenDist > dist) chickenDist = dist;
    } while(next_permutation(brute.begin(), brute.end()));

    cout << chickenDist;
}