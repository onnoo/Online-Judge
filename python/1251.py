import sys; input = sys.stdin.readline


s = input().strip()
words = []

for i in range(1, len(s) - 1):
    for j in range(i + 1, len(s)):
        left = s[:i][::-1]
        mid = s[i:j][::-1]
        right = s[j:][::-1]

        words.append(left + mid + right)

words.sort()
print(words[0])
