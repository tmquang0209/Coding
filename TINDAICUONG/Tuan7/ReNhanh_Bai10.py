nNum = int(input("Enter a number: "))
if nNum < 0:
    print("Âm", end=" ")
nNum = abs(nNum)
#Mảng đọc các giá trị từ 0 đến 9
num2words_less_10 = {0: "không", 1: "một", 2: "hai", 3: "ba",
                     4: "bốn", 5: "năm", 6: "sáu", 7: "bảy", 8: "tám", 9: "chín"}
#Mỗi mảng đọc các giá trị từ 10 đến 19
two_digits = {10: "mười", 11: "mười một", 12: "mười hai", 13: "mười ba", 14: "mười bốn",
              15: "mười lăm", 16: "mười sáu", 17: "mười bảy", 18: "mười tám", 19: "mười chín"}
#Mỗi mảng đọc các giá trị tròn chục từ 20 đến 90
tens_multiple = {20: "hai mươi", 30: "ba mươi", 40: "bốn mươi", 50: "năm mươi",
                 60: "sáu mươi", 70: "bảy mươi", 80: "tám mươi", 90: "chín mươi"}
#Mảng chứa giá trị hàng đơn vị là 5
end_with_five = {15 : "mười lăm", 25 : "hai mươi lăm", 35 : "ba mươi lăm", 45 : "bốn mươi lăm", 55 : "năm mươi lăm", 65 : "sáu mươi lăm", 75 : "bảy mươi lăm", 85 : "tám mươi lăm", 95 : "chín mươi lăm"}
#Kiểm tra điều kiện số nhập vào
if nNum >= 100:
    print("Input must be between 0 and 99")
else:
    if nNum < 10:
        print(num2words_less_10[nNum]) #In ra chuỗi tương ứng với số nhập vào
    elif 10 <= nNum < 20:
        print(two_digits[nNum]) #In ra chuỗi tương ứng với số nhập vào
    elif 20 <= nNum < 100:
        if nNum % 10 == 0: #Kiểm tra số nhập vào có chia hết cho 10 không
            print(tens_multiple[nNum]) #In ra chuỗi tương ứng với số nhập vào
        elif nNum % 10 == 5: #Kiểm tra hàng đơn vị là 5
            print(end_with_five[nNum]) #In ra chuỗi tương ứng với số nhập vào
    else:
        print(tens_multiple[nNum // 10 * 10], num2words_less_10[nNum % 10]) #num//10*10 là số chia hết cho 10, num%10 là số hàng đơn vị




# if nNum == 0:
#     print("không")
# elif nNum == 1:
#     print("một")
# elif nNum == 2:
#     print("hai")
# elif nNum == 3:
#     print("ba")
# elif nNum == 4:
#     print("bốn")
# elif nNum == 5:
#     print("năm")
# elif nNum == 6:
#     print("sáu")
# elif nNum == 7:
#     print("bảy")
# elif nNum == 8:
#     print("tám")
# elif nNum == 9:
#     print("chín")
# elif nNum == 10:
#     print("mười")
# elif nNum == 11:
#     print("mười một")
# elif nNum == 12:
#     print("mười hai")
# elif nNum == 13:
#     print("mười ba")
# elif nNum == 14:
#     print("mười bốn")
# elif nNum == 15:
#     print("mười lăm")
# elif nNum == 16:
#     print("mười sáu")
# elif nNum == 17:
#     print("mười bảy")
# elif nNum == 18:
#     print("mười tám")
# elif nNum == 19:
#     print("mười chín")
# elif nNum == 20:
#     print("hai mươi")
# elif nNum == 21:
#     print("hai mươi một")
# elif nNum == 22:
#     print("hai mươi hai")
# elif nNum == 23:
#     print("hai mươi ba")
# elif nNum == 24:
#     print("hai mươi bốn")
# elif nNum == 25:
#     print("hai mươi lăm")
# elif nNum == 26:
#     print("hai mươi sáu")
# elif nNum == 27:
#     print("hai mươi bảy")
# elif nNum == 28:
#     print("hai mươi tám")
# elif nNum == 29:
#     print("hai mươi chín")
# elif nNum == 30:
#     print("ba mươi")
# elif nNum == 31:
#     print("ba mươi một")
# elif nNum == 32:
#     print("ba mươi hai")
# elif nNum == 33:
#     print("ba mươi ba")
# elif nNum == 34:
#     print("ba mươi bốn")
# elif nNum == 35:
#     print("ba mươi lăm")
# elif nNum == 36:
#     print("ba mươi sáu")
# elif nNum == 37:
#     print("ba mươi bảy")
# elif nNum == 38:
#     print("ba mươi tám")
# elif nNum == 39:
#     print("ba mươi chín")
# elif nNum == 40:
#     print("bốn mươi")
# elif nNum == 41:
#     print("bốn mươi một")
# elif nNum == 42:
#     print("bốn mươi hai")
# elif nNum == 43:
#     print("bốn mươi ba")
# elif nNum == 44:
#     print("bốn mươi bốn")
# elif nNum == 45:
#     print("bốn mươi lăm")
# elif nNum == 46:
#     print("bốn mươi sáu")
# elif nNum == 47:
#     print("bốn mươi bảy")
# elif nNum == 48:
#     print("bốn mươi tám")
# elif nNum == 49:
#     print("bốn mươi chín")
# elif nNum == 50:
#     print("năm mươi")
# elif nNum == 51:
#     print("năm mươi một")
# elif nNum == 52:
#     print("năm mươi hai")
# elif nNum == 53:
#     print("năm mươi ba")
# elif nNum == 54:
#     print("năm mươi bốn")
# elif nNum == 55:
#     print("năm mươi lăm")
# elif nNum == 56:
#     print("năm mươi sáu")
# elif nNum == 57:
#     print("năm mươi bảy")
# elif nNum == 58:
#     print("năm mươi tám")
# elif nNum == 59:
#     print("năm mươi chín")
# elif nNum == 60:
#     print("sáu mươi")
# elif nNum == 61:
#     print("sáu mươi một")
# elif nNum == 62:
#     print("sáu mươi hai")
# elif nNum == 63:
#     print("sáu mươi ba")
# elif nNum == 64:
#     print("sáu mươi bốn")
# elif nNum == 65:
#     print("sáu mươi lăm")
# elif nNum == 66:
#     print("sáu mươi sáu")
# elif nNum == 67:
#     print("sáu mươi bảy")
# elif nNum == 68:
#     print("sáu mươi tám")
# elif nNum == 69:
#     print("sáu mươi chín")
# elif nNum == 70:
#     print("bảy mươi")
# elif nNum == 71:
#     print("bảy mươi một")
# elif nNum == 72:
#     print("bảy mươi hai")
# elif nNum == 73:
#     print("bảy mươi ba")
# elif nNum == 74:
#     print("bảy mươi bốn")
# elif nNum == 75:
#     print("bảy mươi lăm")
# elif nNum == 76:
#     print("bảy mươi sáu")
# elif nNum == 77:
#     print("bảy mươi bảy")
# elif nNum == 78:
#     print("bảy mươi tám")
# elif nNum == 79:
#     print("bảy mươi chín")
# elif nNum == 80:
#     print("tám mươi")
# elif nNum == 81:
#     print("tám mươi một")
# elif nNum == 82:
#     print("tám mươi hai")
# elif nNum == 83:
#     print("tám mươi ba")
# elif nNum == 84:
#     print("tám mươi bốn")
# elif nNum == 85:
#     print("tám mươi lăm")
# elif nNum == 86:
#     print("tám mươi sáu")
# elif nNum == 87:
#     print("tám mươi bảy")
# elif nNum == 88:
#     print("tám mươi tám")
# elif nNum == 89:
#     print("tám mươi chín")
# elif nNum == 90:
#     print("chín mươi")
# elif nNum == 91:
#     print("chín mươi một")
# elif nNum == 92:
#     print("chín mươi hai")
# elif nNum == 93:
#     print("chín mươi ba")
# elif nNum == 94:
#     print("chín mươi bốn")
# elif nNum == 95:
#     print("chín mươi lăm")
# elif nNum == 96:
#     print("chín mươi sáu")
# elif nNum == 97:
#     print("chín mươi bảy")
# elif nNum == 98:
#     print("chín mươi tám")
# elif nNum == 99:
#     print("chín mươi chín")
