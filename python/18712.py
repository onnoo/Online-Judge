import sys; input = sys.stdin.readline


T = int(input())

for _ in range(T):
    N, K = map(int, input().split())

    Cs = list(map(int, input().split()))
    Hs = list(map(int, input().split()))
    pairs = list(zip(Cs, Hs))
    pairs = sorted(pairs, key=lambda x: x[0])

    # K개의 아이스크림 구매 <= 10^6

    min_val = max([ c for c, h in pairs[:K] ])

    candidates = [ t for t in pairs if t[0] <= min_val ]
    count = len(candidates)
    if count == K:
        answer = sum([ h for c, h in pairs[:K] ])
    else:  # 두 가지 이상인 경우
        candidates = sorted(candidates, key=lambda x: x[1], reverse=True)
        answer = sum([ h for c, h in candidates[:K] ])
    
    print(min_val, answer)
