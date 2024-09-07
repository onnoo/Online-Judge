import sys; input = sys.stdin.readline


N = int(input())

mat = []

for _ in range(N):
    row = list(map(int, input().split()))
    mat.append(row)

def dfs(x0, x1, y0, y1):
    """
    ret: white, blue
    """
    if (x1 - x0 == 1 and y1 - y0 == 1):
        if mat[x0][y0] == 0:
            return 1, 0
        else:
            return 0, 1
    
    total = [0, 0]
    s = (x1 - x0) // 2
    for i in range(2):
        for j in range(2):
            x = x0 + s * i
            y = y0 + s * j
            out = dfs(x, x + s, y, y + s)
            total[0] += out[0]
            total[1] += out[1]
    if total[0] == 4 and total[1] == 0:
        return 1, 0
    elif total[0] == 0 and total[1] == 4:
        return 0, 1
    else:
        return total[0], total[1]

ans = dfs(0, N, 0, N)

print(ans[0])
print(ans[1])
