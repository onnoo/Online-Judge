import sys; input = sys.stdin.readline


N, A, B = map(int, input().split())

if N > B:
    print('Bus')
elif A < B:
    print('Bus')
elif B < A:
    print('Subway')
else:
    print('Anything')
