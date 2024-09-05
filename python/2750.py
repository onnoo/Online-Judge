
N = int(input())

ans = []
for _ in range(N):
    ans.append(int(input()))

ans = sorted(ans, reverse=False)

for i in ans:
    print(i)
