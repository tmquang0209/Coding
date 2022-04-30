tongChan = 0
tongLe = 0

num = int(input("Nhập số thứ nhất"))
if(num % 2 == 0):
    tongChan += num
else:
    tongLe += num
num = int(input("Nhập số thứ hai"))
if(num % 2 == 0):
    tongChan += num
else:
    tongLe += num
num = int(input("Nhập số thứ ba"))
if(num % 2 == 0):
    tongChan += num
else:
    tongLe += num
num = int(input("Nhập số thứ bốn"))
if(num % 2 == 0):
    tongChan += num
else:
    tongLe += num
num = int(input("Nhập số thứ năm"))
if(num % 2 == 0):
    tongChan += num
else:
    tongLe += num

print("Tổng các số chẵn là: ", tongChan)
print("Tổng các số lẻ là: ", tongLe)