import sys; input = sys.stdin.readline
from collections import defaultdict

T = int(input())

for t in range(T):
    answer = 0

    mat = []
    for i in range(3):
        row = list(map(int, input().split()))
        if i == 1:
            row = [row[0]] + [0] + [row[1]]
        mat.append(row)
    
    count = defaultdict(int)
    combs = [  # 가운데를 포함하는 경우
        [[0, 0], [2, 2]],
        [[0, 2], [2, 0]],
        [[1, 0], [1, 2]],
        [[0, 1], [2, 1]]
    ]
    for comb in combs:
        total = 0
        for r, c in comb:
            total += mat[r][c]
        if total / 2 == int(total / 2):
            count[total] += 1
    
    if len(count) > 0:
        answer += max(list(count.values()))

    combs = [  # 가운데를 포함하지 않는 경우
        [[0, 0], [0, 1], [0, 2]],
        [[2, 0], [2, 1], [2, 2]],
        [[0, 0], [1, 0], [2, 0]],
        [[0, 2], [1, 2], [2, 2]]
    ]
    for comb in combs:
        diff_1 = mat[comb[0][0]][comb[0][1]] - mat[comb[1][0]][comb[1][1]]
        diff_2 = mat[comb[1][0]][comb[1][1]] - mat[comb[2][0]][comb[2][1]]
        if diff_1 == diff_2:
            answer += 1

    print(f'Case #{t + 1}:', answer)
