import sys; input = sys.stdin.readline

N = int(input())

scores = []

for i in range(N):
    line = input().strip().split()
    C = line[0]
    P = int(line[1])
    E = list(map(int, line[2:]))
    S = 10 * P + sum(E) - min(E) - max(E)
    scores.append((C, S, i))

scores = sorted(scores, key=lambda x: (-x[1], x[2]))

# M: 메달리스트 수
# tie: input order
# 2명까지는 가능

max_score = scores[0][1]
count = 0

for pair in scores:
    if pair[1] == max_score:
        print(pair[0], pair[1])
        count += 1
    elif count <= 2:
        max_score = pair[1]
        print(pair[0], pair[1])
        count += 1
