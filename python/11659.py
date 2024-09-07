import sys; input = sys.stdin.readline


N, M = map(int, input().split())

ls = list(map(int, input().split()))
total = 0
for i in range(N):
    total += ls[i]
    ls[i] = total
ls.insert(0, 0)

for _ in range(M):
    i, j = map(int, input().split())
    ans = ls[j] - ls[i - 1]
    print(ans)
