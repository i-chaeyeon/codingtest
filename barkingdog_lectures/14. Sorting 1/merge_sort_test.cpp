#include <bits/stdc++.h>
using namespace std;

int N = 10;
int arr[1000001] = {15, 25, 22, 357, 16, 23, -53, 12, 46, 3};
int tmp[1000001]; // merge 함수에서 리스트 2개를 합친 결과를 임시로 저장하고 있을 변수

// arr[st:mid]와 arr[mid:en]을 합친다.
void merge(int startIdx, int endIdx){
    int mid = (startIdx+endIdx)/2;
    int idx1 = startIdx;
    int idx2 = mid;

    for(int i=startIdx; i<endIdx; i++){
        if(idx2 == endIdx){
            tmp[i] = arr[idx1++];
        } else if (idx1 == mid){
            tmp[i] = arr[idx2++];
        } else if (arr[idx1] <= arr[idx2]){
            tmp[i] = arr[idx1++];
        } else {
            tmp[i] = arr[idx2++];
        }
    }

    for(int i=startIdx; i<endIdx; i++){
        arr[i] = tmp[i];
    }
}

// arr[st:en]을 정렬하고 싶다.
void merge_sort(int startIdx, int endIdx){
    // termination
    if(startIdx+1 == endIdx) return;

    int midIdx = (startIdx+endIdx)/2;
    merge_sort(startIdx, midIdx);
    merge_sort(midIdx, endIdx);
    merge(startIdx, endIdx);
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    merge_sort(0, N);

    for(int i=0; i<N; i++){
        cout << arr[i] << ' ';
    }
}