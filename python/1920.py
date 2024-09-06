
N = int(input())

A = set(input().split())

M = int(input())

B = list(input().split())

ans = [ str(1) if i in A else str(0) for i in B ]
print('\n'.join(ans))
