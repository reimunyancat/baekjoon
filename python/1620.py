import sys

input = sys.stdin.readline

n, m = map(int,input().rstrip().split())

poke = {}
poke_n = {}
for i in range(1, n+1, 1):
    a = input().rstrip()
    poke[i] = a
    poke_n[a] = i
for j in range(0, m, 1):
    pro = input().rstrip()
    if pro.isdecimal():
        p = int(pro)
        print(poke[p])
    else:
        p = pro
        print(poke_n[p])