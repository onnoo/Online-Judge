import sys

T = int(sys.stdin.readline().rstrip())

for _ in range(T):
    empty = sys.stdin.readline().rstrip()
    N = int(sys.stdin.readline().rstrip())
    total = 0

    for _ in range(N):
        i = int(sys.stdin.readline().rstrip())
        total += i

    if total % N == 0:
        print("YES")
    else:
        print("NO")    
