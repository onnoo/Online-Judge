import sys; input = sys.stdin.readline
from collections import deque

N = int(input())
ls = list(map(int, input().split()))

ls = sorted(ls, reverse=True)
queue = deque(ls)
total = 0

prev = 0

for i in range(N):
    if i % 2 == 0:
        val = queue.popleft()
    else:
        val = queue.pop()
    n = max(0, val - prev)
    total = total + n
    prev = val

print(total)
