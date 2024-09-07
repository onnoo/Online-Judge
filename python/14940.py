import sys; input = sys.stdin.readline


N, M = map(int, input().split())

ans = [ [-2 for _ in range(M)] for _ in range(N) ]

mat = []
start = (-1, -1)
for i in range(N):
    row = list(map(int, input().split()))
    for j in range(M):
        if row[j] == 2:
            start = (i, j)
        elif row[j] == 0:
            ans[i][j] = 0
    mat.append(row)

queue = []
queue.append((*start, 0))
pos = [(1, 0), (0, 1), (-1, 0), (0, -1)]
ans[start[0]][start[1]] = 0

while len(queue) > 0:
    r, c, i = queue.pop(0)

    for offset in pos:
        x = r + offset[0]
        y = c + offset[1]
        if not (x >= 0 and y >= 0 and x < N and y < M):
            continue
        if mat[x][y] == 1 and ans[x][y] == -2:
            ans[x][y] = i + 1
            queue.append((x, y, i + 1))

for row in ans:
    out = [ str(-1) if i == -2 else str(i) for i in row ]
    print(' '.join(out))
