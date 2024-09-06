
A = input()
B = input()
C = input()

if A.isdigit():
    ans = int(A) + 3
elif B.isdigit():
    ans = int(B) + 2
elif C.isdigit():
    ans = int(C) + 1

if ans % 5 == 0 and ans % 3 == 0:
    print('FizzBuzz')
elif ans % 3 == 0:
    print('Fizz')
elif ans % 5 == 0:
    print('Buzz')
else:
    print(ans)
