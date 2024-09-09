import sys; input = sys.stdin.readline

A, B, V = map(int, input().split())

# i + 1
# i * (A - B) + A >= V
# i >= (V - A) / (A - B)

C = (V - A) / (A - B)
if int(C) == C:
    answer = int(C) + 1
else:
    answer = int(C) + 2

print(answer)
