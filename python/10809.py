
s = input()

length = ord('z') - ord('a') + 1
a = ord('a')

answer = []

for i in range(length):
    char = chr(a + i)
    if char in s:
        index = s.index(char)
        answer.append(str(index))
    else:
        answer.append(str(-1))

print(' '.join(answer))
