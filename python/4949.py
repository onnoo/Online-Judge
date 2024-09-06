import sys; input = sys.stdin.readline


while True:
    s = input().rstrip('\n')
    if s == '.':
        break

    stack = []
    answer = True
    
    for c in s:
        if c in ['(', '[']:
            stack.append(c)
        elif c in [')', ']']:
            if len(stack) == 0:
                answer = False
            elif (stack[-1] == '(' and c == ')') or \
                 (stack[-1] == '[' and c == ']'):
                stack.pop()
            else:
                answer = False
    if len(stack) > 0:
        answer = False
    
    if answer:
        print('yes')
    else:
        print('no')
