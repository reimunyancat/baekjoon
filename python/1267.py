n = int(input())
time = list(map(int, input().split()))

sum_y = 0
sum_m = 0

for t in time:
    sum_y += ((t // 30) + 1) * 10
    sum_m += ((t // 60) + 1) * 15

if sum_y < sum_m:
    print("Y", sum_y)
elif sum_y > sum_m:
    print("M", sum_m)
else:
    print("Y M", sum_y)
