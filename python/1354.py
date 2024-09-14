import sys; input = sys.stdin.readline
import math

N, P, Q, X, Y = map(int, input().split())

# A_0 = 1
# A_1
# A_i = A_{floor(i/P)-X} + A_{floor(i/Q)-Y}

dp = {}

def A(i):
    if i <= 0:
        return 1
    if i in dp:
        return dp[i]
    a = A(math.floor(i / P) - X)
    b = A(math.floor(i / Q) - Y)
    ret = a + b
    dp[i] = ret
    return ret

print(A(N))
