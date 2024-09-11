import sys; input = sys.stdin.readline


m, n = map(int, input().split())

for _ in range(m):
    literals = input()

if m < 8:
    print('unsatisfactory')
else:
    print('satisfactory')
