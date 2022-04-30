"""
Kiểm tra 1 số nhập vào có đối xứng không

TODO: EX: 1551
*Loop 1:
? num = 1551 => digit = 1
? reversed = 0 * 10 + digit = 0 * 10 + 1 = 1
? num = num // 10 = 155
*Loop 2:
? num = 155 => digit = 5
? reversed = 1 * 10 + digit = 1 * 10 + 5 = 15
? num = num // 10 = 15
*Loop 3:
? num = 15 => digit = 0
? reversed = 15 * 10 + digit = 15 * 10 + 0 = 150
? num = num // 10 = 15
*Loop 4:
? num = 15 => digit = 5
? reversed = 150 * 10 + digit = 150 * 10 + 5 = 1551
? num = num // 10 = 0
!END!

"""

num = int(input("Nhập số cần kiểm tra: "))

temp = num 
reversed = 0

while num != 0:
    digit = num % 10
    reversed = reversed * 10 + digit #Lấy chữ số cuối cùng và đẩy ngược lên trên
    num = num // 10

if reversed == temp:
    print(temp, "là số đối xứng")
else:
    print(temp, "không là số đối xứng")
    