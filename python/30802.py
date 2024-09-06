
N = int(input())

sizes = list(map(int, input().split()))
T, P = map(int, input().split())

count = [ (s // T) + (s % T != 0) for s in sizes]
print(sum(count))
print(N // P, N % P)
