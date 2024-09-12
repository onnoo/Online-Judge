import sys; input = sys.stdin.readline


# keys = a...z
s = input().strip()
target = input().strip()

# 단축하려면 한번에 지우고 타이핑해야

cnt = 0
for i in range(min(len(s), len(target))):
    if s[i] == target[i]:
        cnt += 1
    else:
        break

answer = len(s) - cnt + len(target) - cnt
print(answer)
