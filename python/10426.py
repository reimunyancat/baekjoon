import datetime

date,n=input().split()
y,m,d=map(int, date.split('-'))
n=int(n)-1

print(datetime.date(y, m, d) + datetime.timedelta(days=n))