import sys; input = sys.stdin.readline


def miller_rabin(n, a):
    tmp = n - 1  # 짝수

    while tmp % 2 == 0:
        tmp = tmp // 2

        val = pow(a, tmp, n)
        if val == n - 1:
            return True
        elif val == 1:
            continue
        else:
            return False
    
    val = pow(a, tmp, n)
    if val == n - 1 or val == 1:
        return True
    else:
        return False


def is_prime(n):
    a = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31]
    
    if n <= 1:
        return False
    if n <= 3:
        return True
    if n % 2 == 0:
        return False
    for i in range(len(a)):
        if n == a[i]:
            return True
        if miller_rabin(n, a[i]) is False:
            return False
    return True


n = input().strip()

rev_n = ''
for i in n:
    if int(i) in [0, 1, 2, 5, 8]:
        pass
    elif int(i) == 6:
        i = '9'
    elif int(i) == 9:
        i = '6'
    else:
        print('no')
        exit()
    rev_n = i + rev_n

rev_n = int(rev_n)
n = int(n)

answer = is_prime(n) and is_prime(rev_n)
if answer:
    print('yes')
else:
    print('no')
