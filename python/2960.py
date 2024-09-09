import sys; input = sys.stdin.readline

N, K = map(int, input().split())

ls = [False, False]

for _ in range(2, N + 1):
    ls.append(True)

cnt = 0
num = -1
for i in range(2, N + 1):
    if ls[i]:
        for j in range(i, N + 1, i):
            if ls[j] is False:
                continue
            ls[j] = False
            cnt += 1
            if cnt == K:
                print(j)
                exit()
