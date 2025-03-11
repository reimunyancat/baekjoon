import datetime

x, y = map(int, input().split())
date = datetime.date(2007, x, y).weekday()
if date == 0:
    print("MON")
elif date == 1:
    print("TUE")
elif date == 2:
    print("WED")
elif date == 3:
    print("THU")
elif date == 4:
    print("FRI")
elif date == 5:
    print("SAT")
else:
    print("SUN")