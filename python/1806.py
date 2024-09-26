import sys; input = sys.stdin.readline


N, S = map(int, input().split())

ls = list(map(int, input().split()))

left = 0
right = 0  # 포함
total = ls[0]

best_length = float('inf')

while True:
    if total >= S:
        length = right - left + 1
        if length < best_length:
            best_length = length
        total -= ls[left]
        left = left + 1
    else:
        right = right + 1
        if right == N:
            break
        total += ls[right]

if best_length == float('inf'):
    best_length = 0

print(best_length)
