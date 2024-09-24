import sys; input = sys.stdin.readline

from collections import deque

N = int(input())

mat = []
for _ in range(N):
    row = list(input().strip())
    mat.append(row)

visit = [ [ False for _ in range(N) ] for _ in range(N) ]

moves = [
    [1, 0], [-1, 0], [0, 1], [0, -1]
]

def dfs(x, y):
    queue = deque()
    queue.append((x, y))

    cnt = 1
    r = 0
    
    while len(queue) > 0:
        
        x, y = queue.popleft()

        for ax, ay in moves:
            xx = x + ax
            yy = y + ay
            if 0 <= xx < N and 0 <= yy < N:
                if mat[xx][yy] == '#':
                    if visit[xx][yy] is False:
                        visit[xx][yy] = True
                        queue.append((xx, yy))

                        cnt += 1
                else:
                    r += 1
            else:
                r += 1

    return cnt, r

outputs = []

for i in range(N):
    for j in range(N):
        if mat[i][j] == '#' and visit[i][j] is False:
            visit[i][j] = True
            cnt, r = dfs(i, j)
            outputs.append((cnt, r))

outputs.sort(key=lambda t: (-t[0], t[1]))

print(outputs[0][0], outputs[0][1])
