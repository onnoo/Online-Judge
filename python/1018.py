import sys; input = sys.stdin.readline


N, M = map(int, input().split())

mat = []
for _ in range(N):
    mat.append(list(input().strip()))


def check(i, j):
    # 왼쪽 위 W
    white = 0
    for x in range(8):
        for y in range(8):
            c = 'W' if (i + x + j + y) % 2 == 0 else 'B'
            white += mat[i + x][j + y] != c
    # 왼쪽 위 B
    black = 0
    for x in range(8):
        for y in range(8):
            c = 'B' if (i + x + j + y) % 2 == 0 else 'W'
            black += mat[i + x][j + y] != c

    return min(white, black)


answer = float('inf')
for i in range(0, N - 7):
    for j in range(0, M - 7):
        answer = min(answer, check(i, j))
print(answer)
