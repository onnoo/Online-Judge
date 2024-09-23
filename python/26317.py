import sys; input = sys.stdin.readline


n = int(input())

for k in range(n):
    c = int(input())  # 차량 수
    d = sorted(map(int, input().split()), reverse=True)
    t = sorted(map(int, input().split()))  # 4 * c 
    
    answer = float('-inf')
    for i in range(c):
        cost = d[i] + max(t[i * 4: i * 4 + 4])
        answer = max(answer, cost)
    
    print(f'Trip #{k + 1}:', answer)
