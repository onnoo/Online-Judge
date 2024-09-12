import sys; input = sys.stdin.readline


def solve():
    dist = int(input())
    left = []
    right = []

    num = 1

    while True:
        if dist % 3 == 0:
            dist = dist // 3
            num *= 3
        elif dist % 3 == 1:
            dist -= 1
            right.insert(0, str(num))
        elif dist % 3 == 2:
            left.insert(0, str(num))
            dist += 1
        if dist == 0:
            break
    out = 'left pan:'
    if len(left) > 0:
        out += ' ' + ' '.join(left)
    print(out)
    out = 'right pan:'
    if len(right) > 0:
        out += ' ' + ' '.join(right)
    print(out)


n = int(input())

for i in range(n):
    solve()
    if i != n - 1:
        print('')
