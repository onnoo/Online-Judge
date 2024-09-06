import sys; input=sys.stdin.readline


N = int(input())

ls = []
cnt = {}
for _ in range(N):
    i = int(input())
    ls.append(i)
    if i in cnt:
        cnt[i] += 1
    else:
        cnt[i] = 1

ls.sort()
cnt = sorted(list(cnt.items()), key=lambda x: (-x[1], x[0]))

print(int(round(sum(ls) / N, 0)))
print(ls[N // 2])
if len(cnt) > 1 and cnt[0][1] == cnt[1][1]:
    print(cnt[1][0])
else:
    print(cnt[0][0])
print(ls[-1] - ls[0])
