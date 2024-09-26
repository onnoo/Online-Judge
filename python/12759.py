import sys; input = sys.stdin.readline


goals = [
    [[0, 0], [0, 1], [0, 2]],
    [[1, 0], [1, 1], [1, 2]],
    [[2, 0], [2, 1], [2, 2]],
    [[0, 0], [1, 0], [2, 0]],
    [[0, 1], [1, 1], [2, 1]],
    [[0, 2], [1, 2], [2, 2]],
    [[0, 0], [1, 1], [2, 2]],
    [[2, 0], [1, 1], [0, 2]]
]

player = int(input())  # 1 or 2

mat = [ [ 0 for _ in range(3) ] for _ in range(3) ]
answer = 0

for _ in range(9):
    r, c = map(int, input().split())

    mat[r - 1][c - 1] = player

    # check
    if answer == 0:
        for goal in goals:
            check = 0
            for x, y in goal:
                check += mat[x][y] == player

            if check == 3:
                answer = player
    
    player = 1 if player == 2 else 2

print(answer)
