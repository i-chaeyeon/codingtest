#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    for(int i=0; i<3; i++){
        int result = 0; 
        for(int j=0; j<4; j++){
            int temp = 0;
            cin >> temp;
            result += temp;
        }

        if(result == 0){
            cout << "D\n";
        } else if (result == 1){
            cout << "C\n";
        } else if (result == 2){
            cout << "B\n";
        } else if (result == 3){
            cout << "A\n";
        } else {
            cout << "E\n";
        }   
    }
}