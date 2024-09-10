import sys; input = sys.stdin.readline

from queue import PriorityQueue
from collections import defaultdict


T = int(input())

# k <= 1,000,000
# I n: n 추가
# D 1: 최대값 삭제
# D -1: 최솟값 삭제

# -1, -1, 3
# 3, 2, 1, 1, -1, -1

def solve():
    asc_q = PriorityQueue()  # lowest first
    desc_q = PriorityQueue()

    count = defaultdict(int)
    k = int(input())
    total = 0
    for _ in range(k):
        cmd, n = input().split()
        n = int(n)
        if cmd == 'I':
            asc_q.put((n, n))
            desc_q.put((-n, n))
            count[n] += 1
            total += 1
        elif cmd == 'D' and n == -1:  # 최솟값 제거
            if total > 0:
                while True:
                    _, n = asc_q.get()
                    if count[n] > 0:
                        count[n] -= 1
                        total -= 1
                        break
        else:  # 최댓값 제거
            if total > 0:
                while True:
                    _, n = desc_q.get()
                    if count[n] > 0:
                        count[n] -= 1
                        total -= 1
                        break
    
    if total == 0:
        print('EMPTY')
    else:
        while True:
            _, min_val = asc_q.get()
            if count[min_val] > 0:
                break
        while True:
            _, max_val = desc_q.get()
            if count[max_val] > 0:
                break
        print(max_val, min_val)


for _ in range(T):
    solve()
