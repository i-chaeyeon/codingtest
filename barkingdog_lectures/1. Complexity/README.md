# 01. Complexity

## 1. Time Complexity

N의 크기에 따라 허용 시간 복잡도가 달라짐

|N의 크기|허용 시간 복잡도|
|------|---|
|5,000 이하|O(N<sup>2</sup>)|
|1,000,000 이하|O(NlogN)|
|10,000,000 이하|O(N)|
|그 이상|O(1), O(logN)|

## 2. Space Complexity

int 변수 4byte인걸 감안, 512MB의 경우 2<sup>29</sup>이기 때문에 변수 총 2<sup>27</sup>개 선언 가능
-> 이런 식으로 계산해서 공간 복잡도 미리 가늠