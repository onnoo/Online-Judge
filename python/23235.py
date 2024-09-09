import sys; input = sys.stdin.readline

i = 1
out = []
while True:
    s = input().strip()
    if s == '0':
        break
    out.append(f'Case {i}: Sorting... done!')
    i += 1
    
print('\n'.join(out))
