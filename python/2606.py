import sys; input = sys.stdin.readline
from collections import defaultdict

N = int(input())
M = int(input())

connect = defaultdict(list)

for _ in range(M):
    a, b = map(int, input().split())
    connect[a].append(b)
    connect[b].append(a)

visited = [ False for _ in range(N + 1) ]
stack = []
stack.append(1)
visited[1] = True

while len(stack) > 0:
    i = stack.pop()
    
    for j in connect[i]:
        if visited[j]:
            continue
        visited[j] = True
        stack.append(j)

print(sum(visited) - 1)
