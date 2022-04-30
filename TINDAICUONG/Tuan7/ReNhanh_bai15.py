#In ra ngày kế tiếp của ngày được nhập vào

#Hàm lấy ngày của tháng
def dayOfMonth(year, month):
    if month in [1, 3, 5, 7, 8, 10, 12]: #Nếu là tháng 1,3,5,7,8,10,12
        return 31
    elif month in [4, 6, 9, 11]: #Nếu là tháng 4,6,9,11
        return 30
    elif month == 2: #Nếu là tháng 2
        if year % 4 == 0 and year % 100 != 0 or year % 400 == 0: #Năm nhuận
            return 29
        else:
            return 28
    else:
        return 0

#Nhập vào ngày, tháng, năm
input = input("Nhập ngày/tháng/năm: ")

#Tách chuỗi theo dấu /
input = input.split("/")

#Lấy ngày, tháng, năm
day = int(input[0])
month = int(input[1])
year = int(input[2])

#Kiểm tra ngày, tháng, năm
if day > dayOfMonth(year, month) or day < 1:
    print("Ngày không hợp lệ")
elif month > 12 or month < 1:
    print("Tháng không hợp lệ")
else:
    if month < 12 and day < dayOfMonth(year, month): #Nếu tháng nhập vào nhỏ hơn 12 và ngày nhập vào nhỏ hơn ngày của tháng nhập vào
        day += 1
    elif month < 12 and day == dayOfMonth(year, month): #Nếu tháng nhập vào nhỏ hơn 12 và ngày nhập vào bằng ngày của tháng nhập vào
        day = 1
        month += 1
    elif month == 12 and day == dayOfMonth(year, month): #Nếu tháng nhập vào bằng 12 và ngày nhập vào bằng ngày của tháng nhập vào
        day = 1
        month = 1
        year += 1
    elif month == 12 and day < dayOfMonth(year, month): #Nếu tháng nhập vào bằng 12 và ngày nhập vào nhỏ hơn ngày của tháng nhập vào
        day += 1

print("Ngày tiếp theo: %d/%d/%d" % (day, month, year))


# date = int(input("Ngày: "))
# month = int(input("Tháng: "))
# year = int(input("Năm: "))
# if month < 1 or month > 12 or date < 1 or date > 31:
#     print("Ngày không hợp lệ")
# else:
#     if(month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12):
#         if(date == 31):
#             if(month == 12):
#                 print("1/1/", year+1)
#             else:
#                 print(1, "/", month + 1, "/", 2021)
#         else:
#             print(date + 1, "/", month, "/", 2021)
#     elif(month == 2):
#         if(year % 4 == 0 and year % 100 != 0 or year % 400 == 0):
#             if(date == 29):
#                 print(1, "/", month + 1, "/", 2021)
#             else:
#                 print(date + 1, "/", month, "/", 2021)
#         else:
#             if(date == 28):
#                 print(1, "/", month + 1, "/", 2021)
#             else:
#                 print(date + 1, "/", month, "/", 2021)
#     elif(month == 4 or month == 6 or month == 9 or month == 11):
#         if(date == 30):
#             print(1, "/", month + 1, "/", 2021)
#         else:
#             print(date + 1, "/", month, "/", 2021)
