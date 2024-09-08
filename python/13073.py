import sys; input = sys.stdin.readline


def solve():
    # 1부터 N 까지의 합
    N = int(input())
    total = (N * (N + 1)) // 2
    
    ans = [total, -1 * N + total * 2, total * 2]
    ans = ' '.join(list(map(str, ans)))
    print(ans)


T = int(input())

for _ in range(T):
    solve()
