import sys; input = sys.stdin.readline


N, M = map(int, input().split())

mat = []
for _ in range(N):
    mat.append(list(map(int, input().split())))

# 구현?
# 모양 수: 2, 1, 4, 2, 4 = 13
# 12 * 250000 = 2초?
# 1x4, 2x2, 2x3, 3x2, 4x1 탐색

# 12개 해보자 (0, 0 기준)
pos = [
    [[0, 0], [0, 1], [0, 2], [0, 3]],  # 1x4
    [[0, 0], [1, 0], [2, 0], [3, 0]],  # 4x1
    [[0, 0], [0, 1], [1, 0], [1, 1]],  # 2x2

    [[0, 0], [0, 1], [0, 2], [1, 0]],  # 3x2
    [[0, 0], [0, 1], [0, 2], [1, 1]],  # 3x2
    [[0, 0], [0, 1], [0, 2], [1, 2]],  # 3x2

    [[1, 0], [1, 1], [1, 2], [0, 0]],  # 3x2
    [[1, 0], [1, 1], [1, 2], [0, 1]],  # 3x2
    [[1, 0], [1, 1], [1, 2], [0, 2]],  # 3x2

    [[0, 0], [1, 0], [2, 0], [0, 1]],  # 2x3
    [[0, 0], [1, 0], [2, 0], [1, 1]],  # 2x3
    [[0, 0], [1, 0], [2, 0], [2, 1]],  # 2x3

    [[0, 1], [1, 1], [2, 1], [0, 0]],  # 2x3
    [[0, 1], [1, 1], [2, 1], [1, 0]],  # 2x3
    [[0, 1], [1, 1], [2, 1], [2, 0]],  # 2x3

    [[0, 0], [0, 1], [1, 1], [1, 2]],  # 2x3
    [[1, 0], [1, 1], [0, 1], [0, 2]],  # 2x3

    [[0, 0], [1, 0], [1, 1], [2, 1]],  # 3x2
    [[0, 1], [1, 1], [1, 0], [2, 0]],  # 3x2
]

def cond(r, c):
    return r >= 0 and r < N and c >=0 and c < M

ans = -1
for i in range(N):
    for j in range(M):
        for moves in pos:
            out = [ mat[i + x][j + y] for x, y in moves if cond(i + x, j + y)]
            if len(out) == 4:
                ans = max(sum(out), ans)

print(ans)