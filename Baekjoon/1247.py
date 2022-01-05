import sys

for _ in range(3):
    N = int(sys.stdin.readline().rstrip())
    total = 0
    for _ in range(N):
        num = int(sys.stdin.readline().rstrip())
        total += num
    if total == 0:
        print(0)
    elif total > 0:
        print("+")
    else:
        print("-")
