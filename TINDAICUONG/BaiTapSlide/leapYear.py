def leapYear(year):
    if year % 4 == 0 and year % 100 != 0 or year % 400 == 0:
        return True
    else:
        return False

inputYear = int(input("Enter year: "))
if leapYear(inputYear):
    print("The year is leap year")
else:
    print("The year is not leap year")