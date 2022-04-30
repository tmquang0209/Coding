def getDayOfMonth(month, year):
    switcher={
        1:31,
        2:28,
        3:31,
        4:30,
        5:31,
        6:30,
        7:31,
        8:31,
        9:30,
        10:31,
        11:30,
        12:31
    }
    if month == 2 and year % 4 == 0:
        return 29
    return switcher.get(month,"Invalid month")

input = input("input date: ")
split = input.split("/")

day = int(split[0])
month = int(split[1])
year = int(split[2])

dayOfMonth = getDayOfMonth(month,year)

if day == dayOfMonth and month < 12:
    print("01/",month+1,"/",year)
elif day == dayOfMonth and month == 12:
    print("01/01/",year+1)
else:
    print(day+1,"/",month,"/",year)