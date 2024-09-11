import sys; input = sys.stdin.readline

import math

A, B, C = map(int, input().split())

# 노트북 개수: i
# 지출: A + B * i
# 수입: C * i

if C == B:
    answer = -1
else:
    N = A / (C - B)
    answer = int(N) + 1

if answer <= 0:
    print(-1)
else:
    print(answer)
