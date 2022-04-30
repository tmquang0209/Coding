#đọc chữ số
num = int(input("Enter a number: "))

#kiểm tra điều kiện số > 0 và < 10
if num < 0 or num > 9:
    print("Invalid number")
else:
    if num == 1:
        print("Một")
    elif num == 2:
        print("Hai")
    elif num == 3:
        print("Ba")
    elif num == 4:
        print("Bốn")
    elif num == 5:
        print("Năm")
    elif num == 6:
        print("Sáu")
    elif num == 7:
        print("Bảy")
    elif num == 8:
        print("Tám")
    elif num == 9:
        print("Chín")

