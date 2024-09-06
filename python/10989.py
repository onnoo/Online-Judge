import sys; input = sys.stdin.readline


N = int(input())

ls = {}
for _ in range(N):
    i = input().strip()
    if i in ls:
        ls[i] += 1
    else:
        ls[i] = 1

for i in range(0, 10001):
    i = str(i)
    if i in ls:
        for _ in range(ls[i]):
            print(i)
