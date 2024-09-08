import sys; input = sys.stdin.readline

def solve():
    N, M, k, D = map(int, input().split())
    
    # A, B 구하기
    # 전체 경기수 = 조합?
    # 같은 지역: C(M, 2) * N * A
    # 다른 지역: C(N, 2) * M * M * B
    # A = k * B

    # 상수로 취급
    same_region = M * (M - 1) // 2 * N
    diff_region = N * (N - 1) // 2 * M * M

    # sum <= D
    # total = SR * (B * K) + DR * (B) <= D
    # B <= D / (SR * K + DR)
    num = same_region * k + diff_region
    ans = int(D / num) * num
    if ans == 0:
        ans = -1

    print(ans)

    

T = int(input())

for _ in range(T):
    solve()