from collections import defaultdict


N = int(input())
ls = input().split()

cnt = defaultdict(lambda: 0)
for i in ls:
    cnt[i] += 1

M = int(input())
ls = input().split()

ans = [ str(cnt[i]) for i in ls ]
print(' '.join(ans))
