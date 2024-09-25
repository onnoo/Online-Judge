import sys; input = sys.stdin.readline
import math


a2, a1, a0 = map(int, input().split())
c = int(input())
n0 = int(input())

# (a2 - c) * n^2 + a1 * n + a0 <= 0
a2 = a2 - c

answer = False

# 1차 방정식인 경우
if a2 == 0:
    if a1 == 0:  # 항등식
        print(int(a0 <= 0))
        exit()
    
    p = (-1) * a0 / a1
    p = math.ceil(p)
    if a1 < 0 and n0 >= p:
        answer = True
    else:
        answer = False
    print(int(answer))
    exit()

# 2차 방정식인 경우
D = a1 ** 2 + (-4) * a2 * a0
if D <= 0:
    if a2 < 0:
        answer = True
    else:
        answer = False
else:  # D > 0, 해가 2개
    if a2 < 0:
        p = max(
            ((-1) * a1 + math.sqrt(D)) / (2 * a2),
            ((-1) * a1 - math.sqrt(D)) / (2 * a2),
        )
        p = math.ceil(p)  # 왼쪽 틱
        if n0 >= p:
            answer = True
        else:
            answer = False
    else:
        answer = False

print(int(answer))
