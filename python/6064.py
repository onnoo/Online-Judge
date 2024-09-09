import sys; input = sys.stdin.readline


def gcd(a, b):
    if (b == 0):
        return a
    else:
        return gcd(b, a % b)


def lcm(a, b):
    g = gcd(a, b)
    return g * (a / g) * (b / g)


def solve():
    M, N, x, y = map(int, input().split())

    max_val = lcm(M, N)
    count = int(max_val // M)

    answer = -1
    for i in range(count):
        if (M * i + x - y) % N == 0:
            j = (M * i + x - y) // N
            answer = N * j + y
    print(answer)
    

T = int(input())

for _ in range(T):
    solve()
