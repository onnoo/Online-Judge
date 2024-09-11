import sys; input = sys.stdin.readline


N = int(input())

# 1,000이하의 자연수에 대한 소수
MAX_NUM = 1005

ls = [ True for _ in range(0, MAX_NUM) ]
ls[0] = False
ls[1] = False

for i in range(2, MAX_NUM):
    if ls[i] is True:
        for j in range(i + i, MAX_NUM, i):
            ls[j] = False

s = map(int, input().split())
count = 0
for i in s:
    if ls[i]:
        count += 1

print(count)
