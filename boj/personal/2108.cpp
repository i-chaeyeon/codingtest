#include <bits/stdc++.h>
using namespace std;

int arr[500001];
int modeArr[8002]; //-4000~4000
int modeCand[8002];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int sum = 0;
    int minnum = 4000;
    int maxnum = -4000;
    int curmode = 0; //현재 최빈값
    int curmodecnt = 0; //현재 최빈값을 가지는 서로 다른 수의 개수

    for(int i=0; i<N; i++){
        cin >> arr[i];
        sum += arr[i]; //1. 산술 평균
        modeArr[arr[i]+4000]++; //3.최빈값
        if(modeArr[arr[i]+4000] == curmode){
            modeCand[curmodecnt] = arr[i];
            curmodecnt++;
        } else if (modeArr[arr[i]+4000] > curmode){
            curmode = modeArr[arr[i]+4000];
            modeCand[0] = arr[i];
            curmodecnt = 1;
        }

        if(minnum > arr[i]) minnum = arr[i];
        if(maxnum < arr[i]) maxnum = arr[i];
    }


    sort(arr, arr+N);
    sort(modeCand, modeCand+curmodecnt);
    
    int mean = round((float)sum/N);
    int median = arr[N/2];
    int mode = curmodecnt>1 ? modeCand[1] : modeCand[0];
    int range = maxnum - minnum;

    cout << mean << "\n" << median << "\n" << mode << "\n" << range;
}