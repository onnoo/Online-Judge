a, b = input().split(' ')
a = int(a)
b = int(b)

if a >= 0:
  if b > 0:
    print(a // b)
    print(a % b)
  else:
    b = -b
    print( -(a // b))
    print(a % b)
else:
  if b > 0:
    print(a // b)
    a -= b
    print(a % b)
  else:
    a += b
    print(a // b)
    print((a- b) - (a//b) * b)
