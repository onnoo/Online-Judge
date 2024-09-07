import sys; input = sys.stdin.readline


N = int(input())
ls = list(map(int, input().split()))

s = sorted(list(set(ls)))
s = {v: i for i, v in enumerate(s)}

ans = ' '.join(map(lambda x: str(s.get(x)), ls))
print(ans)
