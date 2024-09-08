

## Python 복기

* python의 `input()` 함수는 느리다 → `import sys; input = sys.stdin.readline`를 대신 사용하기
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

### 어려웠던 문제 (⚠️누르면 스포)
<details>
  <summary><a href="https://www.acmicpc.net/problem/17241">Pineapple Advertising (17241)</a></summary>
  
  ```
  그래프 탐색 문제, 모든 간선을 1번씩 방문한다는 아이디어, 이전 방문이 다음 방문에 영향을 주는 경우에 유용?
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
