import sys; input = sys.stdin.readline


N = int(input())

mat = []
for _ in range(N):
    row = list(map(int, input().strip()))
    mat.append(row)

def count(i, j):
    moves = [[1, 0], [-1, 0], [0, 1], [0, -1]]
    
    total = 1
    for ax, ay in moves:
        next_x = i + ax
        next_y = j + ay
        if 0 <= next_x < N and 0 <= next_y < N:
            if mat[next_x][next_y] == 1:
                mat[next_x][next_y] = 0
                total += count(next_x, next_y)
    
    return total

ls = []
for i in range(N):
    for j in range(N):
        if mat[i][j] == 1:
            mat[i][j] = 0
            n = count(i, j)
            ls.append(n)

print(len(ls))
for i in sorted(ls):
    print(i)
