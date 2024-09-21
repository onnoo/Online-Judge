import sys

input = sys.stdin.readline

N = int(input())

arr = []

arr.append(list(map(int, input().split())))
arr.append(list(map(int, input().split())))

count = {}

for i in range(N):
    diff = arr[0][i] - arr[1][i]
    if diff in count:
        count[diff] += 1
    else:
        count[diff] = 1

answer = max([ i for i in count.values() ])

print(answer)
