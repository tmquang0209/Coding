#Kiểm tra năm nhuận

def leapYear(year):
    if year % 4 == 0 and year % 100 != 0 or year % 400 == 0: #Là năm nhuận nếu thỏa mãn điều kiện này
        return True
    else:
        return False

inputYear = int(input("Enter year: "))
if inputYear < 0:
    print("Invalid year")
else:
    if leapYear(inputYear): #Nếu là năm nhuận hàm leapYear trả về True
        print("The year is leap year")
    else: #Nếu không phải năm nhuận hàm leapYear trả về False
        print("The year is not leap year")