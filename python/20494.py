import sys; input = sys.stdin.readline


N = int(input())

count = 0

for _ in range(N):
    s = input().strip()
    count += len(s)

print(count)
