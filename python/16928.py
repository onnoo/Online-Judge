import sys; input = sys.stdin.readline


N, M = map(int, input().split())

# graph? (loop가 있는)

connect = {}

for i in range(1, 101):
    connect[i] = i + 1

for _ in range(N):
    a, b = map(int, input().split())
    connect[a] = b

for _ in range(M):
    a, b = map(int, input().split())
    connect[a] = b

# BFS?
queue = []
queue.append((1, 0))
visited = [ False for _ in range(0, 101) ]

while len(queue) > 0:
    num, cnt = queue.pop(0)
    if num == 100:
        print(cnt)
        exit()
    
    # if connect[num] != num + 1:
    #     next_num = connect[num]
    #     if visited[next_num] is False:
    #         visited[next_num] = True
    #         queue.append((next_num, cnt))
    # else:
    for i in range(1, 7):
        next_num = min(num + i, 100)
        if connect[next_num] != next_num + 1:
            next_num = connect[next_num]
        if visited[next_num] is False:
            visited[next_num] = True
            queue.append((next_num, cnt + 1))
