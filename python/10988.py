s = input()

s1 = list(s)

s1.reverse()

s2 = ''.join(s1)
if s == s2:
    print(1)
else:
    print(0)