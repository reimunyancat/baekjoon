n = int(input())
arr = []
for _ in range(n):
    arr.append(input())

arr = sorted(list(set(arr)), key=lambda x: (len(x), x))

for i in range(len(arr)):
    print(arr[i])