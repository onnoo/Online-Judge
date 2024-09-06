import sys; input = sys.stdin.readline

def round(n):
    if n - int(n) >= 0.5:
        return int(n) + 1
    else:
        return int(n)

N = int(input())

if N == 0:
    print(0)
    exit()

ls = []
for _ in range(N):
    ls.append(int(input()))

ls.sort()
cnt = int(round(N * 0.15))

if cnt != 0:
    ls = ls[cnt:-cnt]

ans = sum(ls) / len(ls)
ans = int(round(ans))
print(ans)
