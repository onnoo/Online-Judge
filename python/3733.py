import sys; input = sys.stdin.readline


while 1:
    try:
        s = input()
        if s.strip() == '':
            break
            
        N, S = map(int, s.split())
        ans = (S // (N + 1))
        print(ans)
    except EOFError:
        break
