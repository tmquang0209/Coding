#In ra ngày kế tiếp của ngày được nhập vào của năm 2021

def dayOfMonth(month):
    if month in [1, 3, 5, 7, 8, 10, 12]: #Nếu là tháng 1,3,5,7,8,10,12
        return 31 #Ngày 31
    elif month in [4, 6, 9, 11]: #Nếu là tháng 4,6,9,11
        return 30 #Ngày 30
    elif month == 2: #Nếu là tháng 2
        return 28 #Ngày 28
    else:
        return 0 #Ngày nhập vào không hợp lệ sẽ trả về 0

#Nhập vào ngày, tháng
input = input("Nhập ngày/tháng: ")

input = input.split("/") #Tách chuỗi theo dấu /
day = int(input[0]) #Lấy ngày
month = int(input[1]) #Lấy tháng
year = 2021 

if day > dayOfMonth(month): #Nếu ngày nhập vào lớn hơn ngày của tháng nhập vào
    print("Ngày không hợp lệ")
elif month > 12: #Nếu tháng nhập vào lớn hơn 12
    print("Tháng không hợp lệ") 
else:
    if month < 12 and day < dayOfMonth(month): #Nếu tháng nhập vào nhỏ hơn 12 và ngày nhập vào nhỏ hơn ngày của tháng nhập vào
        day += 1
    elif month < 12 and day == dayOfMonth(month): #Nếu tháng nhập vào nhỏ hơn 12 và ngày nhập vào bằng ngày của tháng nhập vào
        day = 1
        month += 1
    elif month == 12 and day == dayOfMonth(month): #Nếu tháng nhập vào bằng 12 và ngày nhập vào bằng ngày của tháng nhập vào
        day = 1
        month = 1
        year = 2022
    elif month == 12 and day < dayOfMonth(month): #Nếu tháng nhập vào bằng 12 và ngày nhập vào nhỏ hơn ngày của tháng nhập vào
        day += 1
    print("Ngày tiếp theo: %d/%d/%d" % (day, month, year))

# date = int(input("Ngày: "))
# month = int(input("Tháng: "))

# if(month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12):
#     if(date == 31):
#         if(month == 12):
#             print("1/1/2022")
#         else:
#         print(1,"/", month + 1,"/", 2021)
#     else:
#         print(date + 1,"/", month,"/", 2021)
# elif(month == 2):
#     if(date == 28):
#         print(1,"/", month + 1,"/", 2021)
#     else:
#         print(date + 1,"/", month,"/", 2021)
# elif(month == 4 or month == 6 or month == 9 or month == 11):
#     if(date == 30):
#         print(1,"/", month + 1,"/", 2021)
#     else:
#         print(date + 1,"/", month,"/", 2021)
# else:
#     print("Thông tin nhập vào không hợp lệ")