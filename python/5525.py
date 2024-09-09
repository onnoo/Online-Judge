import sys; input = sys.stdin.readline

N = int(input())
M = int(input())
S = input()

count = 0
acc = 0 

I = S.strip().lstrip('O').split('I')  # O 연속된 부분을 건너뛴다는 아이디어

for e in I:
    if acc == N:
        count += 1
        acc -= 1
    
    if len(e) == 1:
        acc += 1
    else:
        acc = 0
        
print(count)
