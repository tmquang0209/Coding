#Hàm kiểm tra quý trong năm
def quaterInTheYear(month): 
    if month in [1,2,3]: #Nếu là tháng 1,2,3
        return 1 #Quý 1
    elif month in [4,5,6]: #Nếu là tháng 4,5,6
        return 2 #Quý 2
    elif month in [7,8,9]: #Nếu là tháng 7,8,9
        return 3 #Quý 3
    else: #Nêu là tháng 10,11,12
        return 4 #Quý 4

#Nhập vào tháng
inputMonth = int(input("Enter month: "))
if inputMonth < 1 or inputMonth > 12: #Nếu tháng nhập vào không hợp lệ
    print("Invalid month!")
else: #Nếu tháng nhập vào hợp lệ
#In ra quý của tháng nhập vào
    print("Quater in the year: ", quaterInTheYear(inputMonth))