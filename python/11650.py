import sys; input = sys.stdin.readline


N = int(input())

ls = []

for _ in range(N):
    x, y = map(int, input().split())
    ls.append((x, y))

ls.sort(key=lambda x: (x[0], x[1]))

for x, y in ls:
    print(x, y)
