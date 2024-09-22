import sys; input = sys.stdin.readline

# 소수 <= 10000 구하기

N = int(input())

numbers = [ -1 for _ in range(N + 1) ]  # 10000 자릿수
numbers[1] = 1
for i in range(3, N - 2, 2):
    numbers[i] = numbers[i - 2] * 100 + 1

primes = []
is_prime = [ True for _ in range(N + 1) ]
is_prime[0] = False
is_prime[1] = False


for i in range(2, N + 1):
    if is_prime[i]:
        if i != 2 or i != 5:
            primes.append(i)
        for j in range(i + i, N + 1, i):
            is_prime[j] = False

# W(p) = p - 2 인 경우 카운트
# W(p)가 p로 나누어지는 가장 작은 wonowon 숫자의 자릿수

# prime 먼저 루프? 101 먼저 루프?



answers = 0

# 1229 * 5000
# 712개가 최대 정답
# 나누려는 수가 너무 크다
# 4884: 10000 이하에서 W(p) = p - 2를 만족하지 않는 경우에 최대 자릿수

mx_range = min(4884, N - 1)

for p in primes:  # 1229
    if numbers[p - 2] % p == 0:
        answers += 1
    
    mx_range = min(4884, p - 2)
    for i in range(3, mx_range, 2):
        if numbers[i] % p == 0:
            answers -= 1
            break

print(answers)
