import sys; input = sys.stdin.readline


hh, mm = map(int, input().split(':'))
nums = list(map(int, input().split()))


def update_time(add_hh=0, add_mm=0):
    global hh, mm
    mm += add_mm
    if mm >= 60:
        mm -= 60
        hh += 1
    hh += add_hh
    if hh >= 12:
        hh -= 12


def update_num():
    global hh, mm, nums
    region = hh // 2
    nums[region] = 0


L = int(input())

for _ in range(L):
    t, cmd = input().strip().split()
    # s.T초 (0앞에 붙어서)
    # 구역 확인, 방향키 위: 해당 구역 0

    if cmd == '^':
        update_num()
    elif cmd.endswith('MIN'):
        update_time(0, int(cmd[:-len('MIN')]))
    elif cmd.endswith('HOUR'):
        update_time(int(cmd[:-len('HOUR')]), 0)

ans = min(sum(nums), 100)
print(ans)
