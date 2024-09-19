import sys; input = sys.stdin.readline
from collections import deque

N = int(input())

mat = []
for _ in range(N):
    row = list(input().strip())
    mat.append(row)

moves = [[1, 0], [-1, 0], [0, 1], [0, -1]]


# 적록색약이 아닌 사람
ans1 = 0
visit = [ [ False for _ in range(N) ] for _ in range(N) ]
color_dict = {'R': ['R'], 'G': ['G'], 'B': ['B']}
for i in range(N):
    for j in range(N):
        if visit[i][j]:
            continue

        queue = deque()
        queue.append((i, j, mat[i][j]))
        ans1 += 1

        while len(queue) > 0:
            x, y, color = queue.popleft()
            
            for ax, ay in moves:
                next_x = x + ax
                next_y = y + ay
                condition = 0 <= next_x < N and 0 <= next_y < N
                condition = condition and visit[next_x][next_y] is False
                condition = condition and mat[next_x][next_y] in color_dict[color]
                if not condition:
                    continue
                visit[next_x][next_y] = True
                queue.append((next_x, next_y, color))
        

# 적록색약인 사람
ans2 = 0
visit = [ [ False for _ in range(N) ] for _ in range(N) ]
color_dict = {'R': ['R', 'G'], 'G': ['G', 'R'], 'B': ['B']}
for i in range(N):
    for j in range(N):
        if visit[i][j]:
            continue

        queue = deque()
        queue.append((i, j, mat[i][j]))
        ans2 += 1

        while len(queue) > 0:
            x, y, color = queue.popleft()
            
            for ax, ay in moves:
                next_x = x + ax
                next_y = y + ay
                condition = 0 <= next_x < N and 0 <= next_y < N
                condition = condition and visit[next_x][next_y] is False
                condition = condition and mat[next_x][next_y] in color_dict[color]
                if not condition:
                    continue
                visit[next_x][next_y] = True
                queue.append((next_x, next_y, color))

print(ans1, ans2)
