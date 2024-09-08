import sys; input = sys.stdin.readline
from collections import defaultdict

# 참고 질문글: https://www.acmicpc.net/board/view/41297
# 주의: 쿼리가 200,000 (시간초과)
# 아이디어: 간선의 개수를 센다? (이 유형을 뭐라고 하지), 칠하기?

MAXVAL = 9999999

N, M, Q = map(int, input().split())

# 중요: 각 노드는 2개의 상태로 관리한다.
# [0] : 쿼리, [1]: 방문
check = [ [MAXVAL, MAXVAL] for _ in range(N + 1) ]
edges = list()

for _ in range(M):
    edges.append(tuple(map(int, input().split())))

results = []

for i in range(Q):  # 방문 시점
    node = int(input())
    
    if check[node][0] == MAXVAL:  # 처음 방문
        check[node][0] = i
        check[node][1] = i
        results.append(1)
    else:  # 이미 방문
        results.append(0)

for a, b in edges:
    # 퍼짐 대상이 아님
    if check[a][0] == MAXVAL and check[b][0] == MAXVAL:
        continue

    if check[a][0] == MAXVAL:  # b는 쿼리 대상
        if check[a][1] == MAXVAL:
            results[check[b][0]] += 1
            check[a][1] = check[b][0]
        elif check[a][1] > check[b][0]:
            results[check[a][1]] -= 1
            results[check[b][0]] += 1
            check[a][1] = check[b][0]
    elif check[b][0] == MAXVAL:  # a는 쿼리 대상
        if check[b][1] == MAXVAL:
            results[check[a][0]] += 1
            check[b][1] = check[a][0]
        elif check[b][1] > check[a][0]:
            results[check[b][1]] -= 1
            results[check[a][0]] += 1
            check[b][1] = check[a][0]
    else:  # a,b 모두 쿼리 대상 (이미 [1]이 채워져 있음)
        if check[a][1] > check[b][0]:
            results[check[a][1]] -= 1
            results[check[b][0]] += 1
            check[a][1] = check[b][0]
        elif check[b][1] > check[a][0]:
            results[check[b][1]] -= 1
            results[check[a][0]] += 1
            check[b][1] = check[a][0]

for i in results:
    print(i)
