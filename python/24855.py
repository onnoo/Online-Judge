import sys; input = sys.stdin.readline


n = int(input())
a = list(map(int, input().split()))

a = sorted(a, reverse=True)

cnt = n // 2

answer = sum(a[:cnt])
print(answer)
