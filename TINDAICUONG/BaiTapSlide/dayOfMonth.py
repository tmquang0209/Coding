def dayOfMonth(month,year):
    switch = {
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
    if year%4==0:
        switch[2]=29
    
    return switch[month]

inputMonth = int(input("Enter month: "))
inputYear = int(input("Enter year: "))

result = dayOfMonth(inputMonth,inputYear)
print("Day of month: ",result)