import sys; input = sys.stdin.readline


count = 1
while True:
    n = int(input())
    if n == 0:
        break
    
    # variable 'a' has some definite value
    check = {'a'}
    for i in range(n):
        a, b = map(lambda x: x.strip(), input().split('='))
        if b in check:
            check.add(a)
        else:
            check.discard(a)
    ls = sorted(list(check))
    answer = ' '.join(map(str, ls)) if len(ls) > 0 else 'none'
    print(f'Program #{count}')
    print(answer + '\n')

    count += 1
