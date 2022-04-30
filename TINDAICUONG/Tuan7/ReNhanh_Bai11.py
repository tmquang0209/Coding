#Thực hiện phép toán
input = input("Enter a calculations: ")

split_input = input.split(" ") #Tách chuỗi theo khoảng trắng

a = int(split_input[0]) #Lấy phần tử đầu tiên
sign = split_input[1] #Lấy dấu toán tử
b = int(split_input[2]) #Lấy phần tử thứ 2

if sign == "+": #Nếu dấu toán tử là +
    print(a + b) #In ra kết quả
elif sign == "-": #Nếu dấu toán tử là -
    print(a - b) #In ra kết quả
elif sign == "*": #Nếu dấu toán tử là *
    print(a * b) #In ra kết quả
elif sign == "/": #Nếu dấu toán tử là /
    if b == 0:
        print("Không thể thực hiện phép tính")
    else:
        print(a / b) #In ra kết quả