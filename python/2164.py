import sys; input = sys.stdin.readline


N = int(input())

arr = [ i for i in range(1, N+1) ]

# 아이디어: 500,000을 한번씩 방문
# 남은 게 짝수: drop에 따라 절반 버리기, drop 유지
# 남은 게 홀수: drop에 따라 절반 버리기, drop 반전

drop_first = True
while len(arr) > 1:
    next_arr = []

    start = 1 if drop_first else 0
    for i in range(start, len(arr), 2):
        next_arr.append(arr[i])
    
    if len(arr) % 2 == 1:
        drop_first = not drop_first

    arr = next_arr

print(arr[0])
