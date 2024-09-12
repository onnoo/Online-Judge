import sys; input = sys.stdin.readline


N, M = map(int, input().split())

name_set = set()
ls = []

for _ in range(N):
    name = input().strip()
    name_set.add(name)

for _ in range(M):
    name = input().strip()
    if name in name_set:
        ls.append(name)

print(len(ls))
ls.sort()
for name in ls:
    print(name)
