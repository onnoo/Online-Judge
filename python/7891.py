import sys; input = sys.stdin.readline


T = int(input())

for _ in range(T):
    x, y = map(int, input().split())
    print(x + y)
