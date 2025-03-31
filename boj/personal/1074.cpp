#include <bits/stdc++.h>
using namespace std;

int N, r, C;
int ans;

void find(int x, int y, int side){
    //term
    if(x==r && y==C){
        cout << ans;
        return;
    }

    //rec
    if(r < x+side && r >= x && C < y+side && C >= y){
        find(x, y, side/2);
        find(x, y+side/2, side/2);
        find(x+side/2, y, side/2);
        find(x+side/2, y+side/2, side/2);
    } else {
        ans += side * side;
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> r >> C; //r행 C열

    int side = pow(2, N);
    find(0, 0, side);
}   