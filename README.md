## TODOs
- 플로이드–워셜 floyd_warshall ?
- 투 포인터 ?
- DP?
- 힙큐?
- min-max heap?

## Python 복기

* python의 `input()` 함수는 느리다 → `import sys; input = sys.stdin.readline`를 대신 사용하기
* `queue.PriorityQueue`보다 `heapq`가 더 빠르다?
* **stack/queue** → `collections.deque` 활용
* 정렬 → `functools.cmp_to_key`, (a, b) → 1 반환시 순서 변경 ([프로그래머스 - 가장 큰 수](https://school.programmers.co.kr/learn/courses/30/lessons/42746))
* python의 `round()` 함수는 의도하지 않게 동작하므로 사용할 때 주의하기
  ```python
  round(1.45, 1)  # 1.4 (버림)
  round(2.45, 1)  # 2.5 (올림)

  def round(n, digit):
      digit = 10 ** digit
      n = n * digit
      if n - int(n) >= 0.5:
          return (int(n) + 1) / digit
      else:
          return int(n) / digit
  # 또는 int(n + 0.5)
  
  round(1.45, 1)  # 1.5 (올림)
  round(2.45, 1)  # 2.5 (올림)
  ```
* 최소 공배수, 최대 공약수
  ```python
  def gcd(a, b):
      if (b == 0):
          return a
      else:
          return gcd(b, a % b)
  
  
  def lcm(a, b):
      g = gcd(a, b)
      return g * (a / g) * (b / g)
  ```

### 어려웠던 문제 (⚠️누르면 스포)
<details>
  <summary><a href="https://www.acmicpc.net/problem/17241">Pineapple Advertising (17241)</a></summary>
  
  ```
  그래프 탐색 문제, 모든 간선을 1번씩 방문한다는 아이디어, 이전 방문이 다음 방문에 영향을 주는 경우에 유용?
  ```
</details>
<details>
  <summary><a href="https://www.acmicpc.net/problem/30804">과일 탕후루 (30804)</a></summary>
  
  ```
  투 포인터 문제, 요령은 왼쪽부터 읽어가면서 2개의 포인터를 업데이트한다는 느낌
  ```
</details>


### 일일 문제풀이

| 차수 | # | 문제 | 티어 |
|---|---|---|:---:|
| Day 1 | [27866](https://www.acmicpc.net/problem/27866) | 문자와 문자열 | <img src="https://d2gd6pc034wcta.cloudfront.net/tier/1.svg" width="14px"> |
| Day 1 | [2753](https://www.acmicpc.net/problem/2753) | 윤년 | <img src="https://d2gd6pc034wcta.cloudfront.net/tier/1.svg" width="14px"> |
| Day 1 | [2839](https://www.acmicpc.net/problem/2839) | 설탕배달 | <img src="https://d2gd6pc034wcta.cloudfront.net/tier/7.svg" width="14px"> |
| Day 2 | [10809](https://www.acmicpc.net/problem/10809) | 알파벳 찾기 | <img src="https://d2gd6pc034wcta.cloudfront.net/tier/4.svg" width="14px"> |
| Day 2 | [2675](https://www.acmicpc.net/problem/2675) | 문자열 반복 | <img src="https://d2gd6pc034wcta.cloudfront.net/tier/4.svg" width="14px"> |
| Day 2 | [11720](https://www.acmicpc.net/problem/11720) | 숫자의 합 | <img src="https://d2gd6pc034wcta.cloudfront.net/tier/2.svg" width="14px"> |
| Day 2 | [1260](https://www.acmicpc.net/problem/1260) | DFS와 BFS | <img src="https://d2gd6pc034wcta.cloudfront.net/tier/9.svg" width="14px"> |
| Day 2 | [2750](https://www.acmicpc.net/problem/2750) | 수 정렬하기 | <img src="https://d2gd6pc034wcta.cloudfront.net/tier/4.svg" width="14px"> |
| Day 3 | [1259](https://www.acmicpc.net/problem/1259) | 팰린드롬수 | <img src="https://d2gd6pc034wcta.cloudfront.net/tier/5.svg" width="14px"> |
| Day 3 | [1181](https://www.acmicpc.net/problem/1181) | 단어 정렬 | <img src="https://d2gd6pc034wcta.cloudfront.net/tier/6.svg" width="14px"> |
| Day 3 | [10828](https://www.acmicpc.net/problem/10828) | 스택  | <img src="https://d2gd6pc034wcta.cloudfront.net/tier/7.svg" width="14px"> |
| Day 3 | [11650](https://www.acmicpc.net/problem/11650) | 좌표 정렬하기 | <img src="https://d2gd6pc034wcta.cloudfront.net/tier/6.svg" width="14px"> |
| Day 4 | [2960](https://www.acmicpc.net/problem/2960) | 에라토스테네스의 체 | <img src="https://d2gd6pc034wcta.cloudfront.net/tier/7.svg" width="14px"> |
| Day 4 | [2606](https://www.acmicpc.net/problem/2606) | 바이러스 | <img src="https://d2gd6pc034wcta.cloudfront.net/tier/8.svg" width="14px"> |
| Day 4 | [10773](https://www.acmicpc.net/problem/10773) | 제로 | <img src="https://d2gd6pc034wcta.cloudfront.net/tier/7.svg" width="14px"> |
| Day 4 | [2869](https://www.acmicpc.net/problem/2869) | 달팽이는 올라가고 싶다 | <img src="https://d2gd6pc034wcta.cloudfront.net/tier/5.svg" width="14px"> |
| Day 5 | [4949](https://www.acmicpc.net/problem/4949) | 균형잡힌 세상 | <img src="https://d2gd6pc034wcta.cloudfront.net/tier/7.svg" width="14px"> |
| Day 5 | [2164](https://www.acmicpc.net/problem/2164) | 카드2 | <img src="https://d2gd6pc034wcta.cloudfront.net/tier/7.svg" width="14px"> |
| Day 5 | [21736](https://www.acmicpc.net/problem/21736) | 헌내기는 친구가 필요해 | <img src="https://d2gd6pc034wcta.cloudfront.net/tier/9.svg" width="14px"> |
| Day 5 | [1654](https://www.acmicpc.net/problem/1654) | 랜선 자르기 | <img src="https://d2gd6pc034wcta.cloudfront.net/tier/9.svg" width="14px"> |
| Day 6 | [1978](https://www.acmicpc.net/problem/1978) | 소수 찾기 | <img src="https://d2gd6pc034wcta.cloudfront.net/tier/4.svg" width="14px"> |
| Day 6 | [1712](https://www.acmicpc.net/problem/1712) | 손익분기점 | <img src="https://d2gd6pc034wcta.cloudfront.net/tier/4.svg" width="14px"> |
| Day 6 | [28113](https://www.acmicpc.net/problem/28113) | 정보섬의 대중교통 | <img src="https://d2gd6pc034wcta.cloudfront.net/tier/1.svg" width="14px"> |
| Day 6 | [2884](https://www.acmicpc.net/problem/2884) | 알람 시계 | <img src="https://d2gd6pc034wcta.cloudfront.net/tier/3.svg" width="14px"> |
| Day 6 | [17952](https://www.acmicpc.net/problem/17952) | 과제는 끝나지 않아! | <img src="https://d2gd6pc034wcta.cloudfront.net/tier/8.svg" width="14px"> |
| Day 7 | [1018](https://www.acmicpc.net/problem/1018) | 체스판 다시 칠하기 | <img src="https://d2gd6pc034wcta.cloudfront.net/tier/7.svg" width="14px"> |
| Day 7 | [1764](https://www.acmicpc.net/problem/1764) | 듣보잡 | <img src="https://d2gd6pc034wcta.cloudfront.net/tier/7.svg" width="14px"> |



<!-- https://d2gd6pc034wcta.cloudfront.net/tier/6.svg : silver 5 -->
