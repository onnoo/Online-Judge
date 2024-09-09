import sys; input = sys.stdin.readline
from collections import defaultdict

N = int(input())
ls = list(map(int, input().split()))

# 탕후루 길이 (N) = 200,000
# 1~9 각 숫자의 처음 인덱스와 마지막 인덱스
# 9C2 = 36
# 나머지 과일들의 처음 등장과 마지막 등장 제외
# 투 포인터???!! (이동하는 느낌)

start = 0
end = 0
nums = set()
ndict = { i: 0 for i in range(0, 10) }

nums.add(ls[0])
ndict[ls[0]] += 1

answer = -1

for i in ls[1:]:

    if i in nums:
        ndict[i] += 1
    else:
        if len(nums) < 2:
            ndict[i] += 1
            nums.add(i)
        else:
            # 새로운 sequence 시작
            length = end - start + 1
            answer = max(answer, length)
            
            while len(nums) == 2:
                n = ls[start]
                ndict[n] -= 1
                if ndict[n] == 0:
                    nums.remove(n)
                start += 1
            
            nums.add(i)
            ndict[i] += 1
            
    end += 1

length = end - start + 1
answer = max(answer, length)

print(answer)
