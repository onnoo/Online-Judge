import sys; input = sys.stdin.readline

N = int(input())

stack = []

for _ in range(N):
    cmd = input()
    if cmd.startswith('push'):
        n = int(cmd[5:])
        stack.append(n)
    elif cmd.startswith('pop'):
        if len(stack) > 0:
            n = stack.pop()
            print(n)
        else:
            print(-1)
    elif cmd.startswith('top'):
        if len(stack) > 0:
            print(stack[-1])
        else:
            print(-1)
    elif cmd.startswith('empty'):
        if len(stack) > 0:
            print(0)
        else:
            print(1)
    elif cmd.startswith('size'):
        print(len(stack))
