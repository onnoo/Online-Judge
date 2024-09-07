import sys; input = sys.stdin.readline

M = int(input())

s = set()

for _ in range(M):
    cmd = input()
    if cmd.startswith('add '):
        x = int(cmd[len('add '):])
        s.add(x)  # ignore duplication
    elif cmd.startswith('remove '):
        x = int(cmd[len('remove '):])
        if x in s:
            s.remove(x)
    elif cmd.startswith('check '):
        x = int(cmd[len('check '):])
        if x in s:
            print(1)
        else:
            print(0)
    elif cmd.startswith('toggle '):
        x = int(cmd[len('toggle '):])
        if x in s:
            s.remove(x)
        else:
            s.add(x)
    elif cmd.startswith('all'):
        s = set(range(1, 21))
    elif cmd.startswith('empty'):
        s = set()
