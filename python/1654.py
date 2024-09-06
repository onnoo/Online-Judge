import sys; input = sys.stdin.readline


K, N = list(map(int, input().split()))

ls = []
for _ in range(K):
    ls.append(int(input()))

# binary search?

left = 1
right = sum(ls) // N

# 종료조건?
# left를 answer로 만든다면,
while left < right:
    mid = (right + left) // 2 + 1

    cnt = sum([ i // mid for i in ls ])
    if cnt >= N:
        left = mid
    else:
        right = mid - 1

answer = left
print(answer)
