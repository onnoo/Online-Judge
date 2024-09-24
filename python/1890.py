import sys; input = sys.stdin.readline


N = int(input())

mat = []
for _ in range(N):
    row = list(map(int, input().split()))
    mat.append(row)

cnt = [ [ 0 for _ in range(N) ] for _ in range(N) ]
cnt[0][0] = 1

for i in range(N):
    for j in range(N):
        step = mat[i][j]
        if step == 0:
            continue

        if i + step < N:
            cnt[i + step][j] += cnt[i][j]
        
        if j + step < N:
            cnt[i][j + step] += cnt[i][j]

print(cnt[N - 1][N - 1])
