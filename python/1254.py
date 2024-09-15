import sys; input = sys.stdin.readline


#  0개 이상의 문자를 **문자열 뒤에 추가**

S = input().strip()

max_len = -1

for i in range(1, len(S) + 1):
    sub = S[-i:]

    if sub == sub[::-1]:
        max_len = len(sub)

answer = max_len + (len(S) - max_len) * 2
print(answer)
