
T = int(input())

for _ in range(T):
    s = input().split()
    R, S = s
    R = int(R)
    
    out = ''.join([ c * R for c in S ])
    print(out)
