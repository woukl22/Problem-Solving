정렬 ```- 배열의 원소를 순서대로 나열하는 알고리즘을 배워 봅시다.```
---
1. 2750	[수 정렬하기](https://www.acmicpc.net/problem/2750)
    ```- 시간 복잡도가 O(n²)인 정렬 알고리즘으로 풀 수 있습니다. 예를 들면 삽입 정렬, 거품 정렬 등이 있습니다.```
2. 2751 [수 정렬하기 2](https://www.acmicpc.net/problem/2751)
    ```- 시간 복잡도가 O(nlogn)인 정렬 알고리즘으로 풀 수 있습니다. 예를 들면 병합 정렬, 힙 정렬 등이 있지만, 어려운 알고리즘이므로 지금은 언어에 내장된 정렬 함수를 쓰는 것을 추천드립니다.```
3. 10989 [수 정렬하기 3](https://www.acmicpc.net/problem/10989)
    ```- 수의 범위가 작다면 카운팅 정렬을 사용하여 더욱 빠르게 정렬할 수 있습니다.```
4. 2108 [통계학](https://www.acmicpc.net/problem/2108)
    ```- 정렬을 활용하는 문제```
5. 1427	[소트인사이드](https://www.acmicpc.net/problem/1427)
    ```- 숫자를 정렬하는 문제```
6. 11650 [좌표 정렬하기](https://www.acmicpc.net/problem/11650)
    ```- 좌표를 정렬하는 문제```
7. 11651 [좌표 정렬하기 2](https://www.acmicpc.net/problem/11651)
    ```- 좌표를 다른 순서로 정렬하는 문제```
8. 1181 [단어 정렬](https://www.acmicpc.net/problem/1181)
    ```- 단어의 순서를 정의하여 정렬하는 문제```
9. 10814 [나이순 정렬](https://www.acmicpc.net/problem/10814)
    ```- 값이 같은 원소의 전후관계가 바뀌지 않는 정렬 알고리즘을 안정 정렬(stable sort)이라고 합니다.```
10. 18870 [좌표 압축](https://www.acmicpc.net/problem/18870)
    ```- 만약 정확한 값이 필요 없고 값의 대소 관계만 필요하다면, 모든 수를 0 이상 N 미만의 수로 바꿀 수 있습니다.```

<br><br>

2차원 벡터 초기화하는 방법
---
1. 
```
vector<vector<int>> arr(n, vector<int>(m,0));
```

<br>

2.
```
vector<vector<int>> arr;
arr.assign(n, vector<int>(m,0));
```
