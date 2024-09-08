import sys;  input = sys.stdin.readline
from collections import defaultdict


L, N, T = map(int, input().split())

# 1000 * 100 시간?
# 1000 * 1000 시간?

bs = []

for _ in range(N):
    x, d = input().strip().split()
    bs.append([int(x), d])

count = 0
for _ in range(T):
    check = defaultdict(list)
    for i, (x, d) in enumerate(bs):
        if d == 'L':
            next_x = x - 1
        else:
            next_x = x + 1
        bs[i][0] = next_x
        check[next_x].append(i)
    for x, ls in check.items():
        if x == 0:
            for i in ls:
                bs[i][1] = 'R'
        elif x == L:
            for i in ls:
                bs[i][1] = 'L'
        elif len(ls) > 1:
            count += 1
            for i in ls:
                bs[i][1] = 'R' if bs[i][1] == 'L' else 'L'

print(count)
