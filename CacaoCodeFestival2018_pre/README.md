카카오 코드 페스티벌 2018 예선 문제풀이
======================================

**A번_BJ15953**

**B번_BJ15954**[인형들](https://www.acmicpc.net/problem/15954)
```
  - 인형을 K개를 선택하는 것이 아니라 K개 이상을 선택해야 한다는 점을 처음에 간과하였다. 
  - 문제 길이가 길면 문제를 정확히 해석하는 것도 중요함을 느꼈다.
  - 절대/상대 오차가 10-6이므로, 실수의 정밀도 관련 문제에 대해 어느 정도 고려할 필요가 있었다.
	- 나는 C++  O(N^3) 풀이에 double을 적용하여 풀었다.
  - + 불필요한 연산을 줄이기 위해 m을 구하기 위한 일렬로 세워진 인형 선호자 수의 합을 미리 배열로 저장하였다.
```