import sys; input = sys.stdin.readline


T = int(input())

ls = [1, 1, 1, 2, 2, 3, 4, 5, 7, 9, 12, 16]  # next: 21

# ls[12] (21) = ls[11] (16) + ls[7] (5)
# ls[11] (16) = ls[10] (12) + ls[6] (4)
# ls[10] (12) = ls[9 ] (9)  + ls[5] (3)
# ls[ 9] (9)  = ls[8 ] (7)  + ls[4] (2)

for i in range(101):
    if i < len(ls):
        continue
    x = ls[i - 1] + ls[i - 5]
    ls.append(x)

for _ in range(T):
    i = int(input())
    print(ls[i - 1])
