import sys; input = sys.stdin.readline

N = int(input())

stack = []
score = 0

for _ in range(N):
    s = input()

    if s[0] == '0':
        pass
    else:
        _, A, T = map(int, s.split())
        stack.append([A, T])

    if len(stack) > 0:
        stack[-1][1] -= 1
        if stack[-1][1] == 0:
            score += stack[-1][0]
            stack.pop()

print(score)
