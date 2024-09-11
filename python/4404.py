import sys; input = sys.stdin.readline

# gopher 위치, dog 위치
gopher_x, gopher_y, dog_x, dog_y = map(float, input().split())


ls = []

while True:
    try:
        s = input()
        if s.strip() == '':
            break
        hole_xy = tuple(map(float, s.split()))
        ls.append(hole_xy)
        
    except EOFError:
        break

answer = "The gopher cannot escape."
for hx, hy in ls:
    dist_gopher = (hx - gopher_x) ** 2 + (hy - gopher_y) ** 2
    dist_dog = (hx - dog_x) ** 2 + (hy - dog_y) ** 2
    if dist_gopher < dist_dog / 4:
        answer = "The gopher can escape through the hole at ({:.3f},{:.3f})."
        answer = answer.format(hx, hy)

print(answer)
