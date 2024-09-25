import sys; input = sys.stdin.readline
from collections import deque


s = input().strip()

pos = ['N', 'E', 'S', 'W']

stack = deque()
i = 0
answer = 0

for c in s:
    if c == 'R':
        if len(stack) == 0 and pos[i] == 'N':
            stack.append(1)
        elif len(stack) > 0:
            stack.append(1)
        i = (i + 1) % 4
    else:
        if len(stack) > 0:
            stack.pop()
        i = (i - 1) % 4

    if len(stack) == 4:  # 한 바퀴
        stack = deque()
        answer += 1

print(answer)
