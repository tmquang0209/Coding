#Viết chương trình nhập vào 5 số nguyên. Sau đó in ra tổng các số chẵn, tổng các số lẻ. Gợi ý: Số chẵn là số chia cho 2 dư 0. 

num1 = int(input("Số thứ nhất: "))
num2 = int(input("Số thứ hai: "))
num3 = int(input("Số thứ ba: "))
num4 = int(input("Số thứ tư: "))
num5 = int(input("Số thứ năm: "))

tongChan = 0
tongLe = 0

if(num1 % 2 == 0):
    tongChan += num1
else:
    tongLe += num1

if(num2 % 2 == 0):
    tongChan += num2
else:
    tongLe += num2

if(num3 % 2 == 0):
    tongChan += num3
else:
    tongLe += num3

if(num4 % 2 == 0):
    tongChan += num4
else:
    tongLe += num4

if(num5 % 2 == 0):
    tongChan += num5
else:
    tongLe += num5

print("Tổng các số chẵn là: ", tongChan)
print("Tổng các số lẻ là: ", tongLe)