import sys; input = sys.stdin.readline


def solve():
    p = input()
    n = int(input())
    ls = input().strip()
    if n == 0:
        ls = []
    else:
        ls = ls.strip('[]').split(',')
    
    is_reverse = False
    
    for c in p:
        if c == 'R':
            is_reverse = not is_reverse
        if c == 'D':
            if len(ls) > 0:
                if is_reverse:
                    ls.pop(-1)
                else:
                    ls.pop(0)
            else:
                print('error')
                return
    if is_reverse:
        ls = ls[::-1]
    print('[' + ','.join(ls) + ']')


T = int(input())

for _ in range(T):
    solve()
