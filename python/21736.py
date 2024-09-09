import sys; input = sys.stdin.readline


N, M = map(int, input().split())


mat = []
start = (-1, -1)

for i in range(N):
    row = [ c for c in input().strip() ]
    for j in range(M):
        if row[j] == 'I':
            start = (i, j)
    mat.append(row)

count = 0
moves = [(1, 0), (0, 1), (-1, 0), (0, -1)]

# DFS
stack = []
stack.append(start)
while len(stack) > 0:
    i, j = stack.pop()

    if mat[i][j] == 'P':
        count += 1
    mat[i][j] = 'X'

    for (ax, ay) in moves:
        x = i + ax
        y = j + ay
        if 0 <= x < N and 0 <= y < M and mat[x][y] != 'X':
            stack.append((x, y))

if count == 0:
    print('TT')
else:
    print(count)
