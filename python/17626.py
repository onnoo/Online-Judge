import sys; input = sys.stdin.readline
import math

N = int(input())

# dp?
# check 1
ls = [ 4 for _ in range(N + 2) ]

max_val = int(math.sqrt(N))

# check 1
for i in range(1, max_val + 1):
    x = i ** 2
    if x == N:
        print(1)
        exit()
    ls[x] = 1

# check 2
for i in range(1, max_val + 1):
    for j in range(i, max_val + 1):
        x = i ** 2 + j ** 2
        if x > N:
            break
        if x == N:
            print(2)
            exit()
        ls[x] = min(ls[x], 2)

# check 3
for i in range(1, max_val + 1):
    diff = N - i ** 2
    if ls[diff] <= 2:
        print(1 + ls[diff])
        exit()

print(4)
