import sys; input = sys.stdin.readline
from collections import defaultdict

N = int(input())

# 앞뒤 상관없이

def count_chars(s):
    count = defaultdict(int)
    for c in s:
        count[c] += 1
    return count

count = defaultdict(int)

for _ in range(N):
    a, b = input().strip().split()

    # 각 면에 써진 단어
    a = count_chars(a)
    b = count_chars(b)

    for c in range(ord('a'), ord('z') + 1):
        c = chr(c)
        count[c] += max(a[c], b[c])

for c in range(ord('a'), ord('z') + 1):
    c = chr(c)
    print(count[c])
