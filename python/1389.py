import sys; input = sys.stdin.readline
from collections import defaultdict

# graph search, shortest path?
# dp?, BFS?

# edges: 5,000
# nodes = 100


N, M = map(int, input().split())

connect = defaultdict(list)
for _ in range(M):
    a, b = map(int, input().split())
    a -= 1
    b -= 1
    connect[a].append(b)
    connect[b].append(a)


best_sum = float('inf')
answer = float('inf')
for i in range(N):
    visited = [ 0 for _ in range(N) ]
    # BFS
    queue = list()
    queue.append((i, 0))

    while len(queue) > 0:
        src, n = queue.pop(0)
        
        for dst in connect[src]:
            if visited[dst] > 0:
                continue
            visited[dst] = n + 1
            queue.append((dst, n + 1))
    
    total = sum(visited)
    if total < best_sum or (total == best_sum and i < answer):
        answer = i
        best_sum = total

print(answer + 1)
