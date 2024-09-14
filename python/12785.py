import sys; input = sys.stdin.readline


DIV = 1_000_007
dp = [ [ -1 for _ in range(410) ] for _ in range(410) ]

def comb(n, i):
    if i == 0 or i == n:
        return 1
    if dp[n][i] != -1:
        return dp[n][i]
    
    ret = (comb(n - 1, i - 1) + comb(n - 1, i)) % DIV
    dp[n][i] = ret
    return ret


w, h = map(int, input().split())
x, y = map(int, input().split())

# 처음에는 토스트집으로 갈 수 있는 경우의 수
# up, right
ax = abs(x - 1)
ay = abs(y - 1)
dist = ax + ay  # 택시 거리
a = comb(dist, ax)

# 토스트집 -> 학교
ax = abs(w - x)
ay = abs(h - y)
dist = ax + ay
b = comb(dist, ax)

answer = (a * b) % DIV

print(answer)
