# 07. Deque ; Double Ended Queue

-  양쪽 끝에서 삽입/삭제가 가능한 자료구조


```
const int MAX = 1000005;
int dat[2*MAX + 1];
int head = MAX;
int tail = MAX;
```

head : 가장 앞에 있는 원소의 인덱스 </br>
tail : 가장 뒤에 있는 원소의 인덱스 + 1 = 새로운 원소가 들어올 인덱스

circular 구현도 가능하지만, 코딩테스트에서는 배열 사이즈를 크게 잡아서 구현

## STL

```
deque<int> DQ;
DQ.push_front(int);
DQ.push_back(int);
DQ.insert(DQ.begin()+idx, int);

DQ.pop_front();
DQ.pop_back();
DQ.erase(DQ.begin()+idx);

DQ.front();
DQ.back();

DQ.size()
DQ.empty()
DQ.clear()
```