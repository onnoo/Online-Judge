import sys; input = sys.stdin.readline

# sys.setrecursionlimit(10**6)

N, K = map(int, input().split())

MAXSIZE = 100000
MAXSTEP = 9999999999
total_step = MAXSTEP


queue = []
visited = [ MAXSTEP for _ in range(MAXSIZE + 6) ]
queue.append((N, 0))
visited[N] = 0

while len(queue) > 0:
    x, i = queue.pop(0)
    
    if i > total_step:
        continue

    if x == K:
        total_step = min(total_step, i)
    
    if x > K and visited[K] > i + (x - K):
        visited[K] = i + (x - K)
        queue.append((K, i + (x - K)))
        continue
    
    if x == 0 and visited[x + 1] > i + 1:
        visited[x + 1] = i + 1
        queue.append((x + 1, i + 1))
        continue
    
    if x * 2 <= MAXSIZE and visited[x * 2] > i + 1:
        visited[x * 2] = i + 1
        queue.append((x * 2, i + 1))
    if x + 1 <= MAXSIZE and visited[x + 1] > i + 1:
        visited[x + 1] = i + 1
        queue.append((x + 1, i + 1))
    if x - 1 >= 0 and visited[x - 1] > i + 1:
        visited[x - 1] = i + 1
        queue.append((x - 1, i + 1))


print(total_step)
