
N = int(input())

ls = set()

for _ in range(N):
    s = input()
    ls.add(s)
    # ls.append((len(s), s))

ls = list(ls)

ans = sorted(ls, key=lambda x: (len(x), x))
ans = '\n'.join(ans)
print(ans)
