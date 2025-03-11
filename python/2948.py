import datetime as dt

d, m = map(int, input().split())
r = dt.datetime(2009, m, d).weekday()
if r == 0:
    print("Monday")
elif r == 1:
    print("Tuesday")
elif r == 2:
    print("Wednesday")
elif r == 3:
    print("Thursday")
elif r == 4:
    print("Friday")
elif r == 5:
    print("Saturday")
else:
    print("Sunday")