import sys; input = sys.stdin.readline


N, M, B = map(int, input().split())

ls = []
for _ in range(N):
    ls.extend(list(map(int, input().split())))

# 1) brute force? (500 x 500 x 256) -> 시간초과
# 2) binary search? 256 log 2 -> 8
# 3) count 256, accumulate

dct = {}
max_blocks = 0

for i in ls:
    max_blocks += i
    if i in dct:
        dct[i] += 1
    else:
        dct[i] = 1

out = dict(sorted(list(dct.items())))

remove_blocks = 0
floor = 0
remove_blocks_list = []
for height in range(256, -1, -1):
    if height + 1 in dct:
        floor += dct[height + 1]
    remove_blocks += floor
    remove_blocks_list.insert(0, remove_blocks)


add_blocks = 0
add_blocks_list = [0]
floor = 0
for height in range(0, 257, 1):
    if height > 0:
        add_blocks += floor
        add_blocks_list.append(add_blocks)

    if height in dct:
        floor += dct[height]

best_t = float('inf')
best_h = -1


for height in range(256, -1, -1):
    # 내려가면서 blocks 추가, 시간 및 높이 계산하기
    remove_blocks = remove_blocks_list[height]
    add_blocks = add_blocks_list[height]

    left = B + remove_blocks - add_blocks

    if left >= 0:
        t = remove_blocks * 2 + add_blocks
        if t < best_t:
            best_t = t
            best_h = height

print(best_t, best_h)
