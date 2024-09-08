import sys; input = sys.stdin.readline


grade2score = {
    'A+': 4.5,
    'A0': 4.0,
    'B+': 3.5,
    'B0': 3.0,
    'C+': 2.5,
    'C0': 2.0,
    'D+': 1.5,
    'D0': 1.0,
    'F' : 0.0
}

total_num = 0
total_score = 0

for _ in range(20):
    name, num, grade = input().strip().split()
    if grade == 'P':
        continue
    total_num += float(num)
    total_score += grade2score[grade] * float(num)

print(f'{total_score / total_num:.6f}')
