import sys; input = sys.stdin.readline


N, M = map(int, input().split())
# binary search!!

def solve():
    u, d = map(int, input().split())

    left, right = 0, N  # up 누르는 횟수

    while left < right:
        mid = (left + right) // 2
        mval = mid * u - (N - mid) * d
        if mval <= 0:
            left = mid + 1
        else:  # mval >= 0
            right = mid
    
    val = left * u - (N - left) * d
    return val

ans = float('inf')
for _ in range(M):
    ret = solve()
    ans = min(ans, ret)

print(ans)
