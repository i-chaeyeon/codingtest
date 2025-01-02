# 06. Queue

```
const int MAX = 1000005;
int dat[MAX];
int head = 0, tail = 0;
```

head: 가장 앞에 있는 원소의 인덱스   
tail: 새로운 원소가 들어올 인덱스 = 가장 뒤에 있는 원소의 인덱스 + 1

queue의 크기 = tail - head


## Circular Queue
```
use MOD (%)
```