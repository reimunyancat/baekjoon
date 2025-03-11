li = ['c=', 'c-', 'dz=', 'lj', 'nj', 's=', 'z=', 'd-']

a = input()
result = 0
i = 0

while i < len(a):
    if a[i:i+3] in li:
        result += 1
        i += 3
    elif a[i:i+2] in li:
        result += 1
        i += 2
    else:
        result += 1
        i += 1

print(f"{result}".rstrip())