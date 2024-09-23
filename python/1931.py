import sys; input = sys.stdin.readline


N = int(input())

ls = []
for _ in range(N):
    i, j = map(int, input().split())
    ls.append((i, j))

ls.sort()
a = []

for i, j in ls:
    if len(a) == 0:
        a.append((i, j))
        continue
    if a[-1][1] <= i:
        a.append((i, j))
    elif j < a[-1][1]:
        a.pop(-1)
        a.append((i, j))

print(len(a))
