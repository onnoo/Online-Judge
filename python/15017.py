import sys; input = sys.stdin.readline


n = int(input())

entry = []
for _ in range(n):
    name, a, b = input().strip().split()
    a = float(a)
    b = float(b)
    entry.append((name, a, b))

best_score = float('inf')
best_names = None
sorted_ls = sorted(entry, key=lambda x: x[2])

for i in range(n):
    score = entry[i][1]
    names = [entry[i][0]]

    cnt = 0
    j = 0
    while cnt < 3:
        if sorted_ls[j][0] != names[0]:
            score += sorted_ls[j][2]
            names.append(sorted_ls[j][0])
            cnt += 1
        j += 1
    
    if score < best_score:
        best_score = score
        best_names = names

print(best_score)
print('\n'.join(best_names))
