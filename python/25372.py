n = int(input())

for _ in range(n):
    a = input()
    if len(a) > 5 and len(a) < 10:
        print("yes")
    else:
        print("no")
