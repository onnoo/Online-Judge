import sys; input = sys.stdin.readline


N = int(input())

dct = dict()
for _ in range(N):
    name = input().strip()
    if name in dct:
        dct[name] += 1
    else:
        dct[name] = 1

for _ in range(N - 1):
    name = input().strip()
    if dct[name] == 1:
        del dct[name]
    else:
        dct[name] -= 1

print(list(dct.keys())[0])
