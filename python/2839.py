
N = int(input())

ans = N // 5
left = N % 5  # 0, 1, 2, 3, 4

if left == 0:
    pass
elif left == 1 and ans >= 1:  # 1 -> 6 (-1 + 2)
    ans += 1
elif left == 2 and ans >= 2:  # 2 -> 12 (-2 + 4)
    ans += 2
elif left == 3:  # (+1)
    ans += 1
elif left == 4 and ans >= 1:  # 4 -> 9  (-1 + 3)
    ans += 2
else:
    ans = -1

print(ans)
