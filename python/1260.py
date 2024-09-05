from collections import defaultdict

N, M, V = map(int, input().split())
V -= 1

mat = defaultdict(list)


for _ in range(M):
    i, j = map(int, input().split())
    i -= 1
    j -= 1
    mat[i].append(j)
    mat[j].append(i)

for i in mat:
    mat[i].sort()

### DFS

visited = set()
answer = []

def DFS(i):
    visited.add(i)
    answer.append(i)
    
    for j in mat[i]:
        if j not in visited:
            DFS(j)

DFS(V)
answer = ' '.join([ str(i + 1) for i in answer])
print(answer)

### BFS

visited = set([V])
answer = [V]
q = [V]

while len(q) > 0:
    i = q.pop(0)
    
    for j in mat[i]:
        if j not in visited:
            visited.add(j)
            answer.append(j)
            q.append(j)

answer = ' '.join([ str(i + 1) for i in answer])
print(answer)
