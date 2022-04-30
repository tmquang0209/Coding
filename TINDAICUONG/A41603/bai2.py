"""
TODO: Tính diện tích hình chữ nhật
! Input: chiều dài, chiều rộng
* Output: diện tích hình chữ nhật
"""

chieuDaiA = -1
chieuRongA = -1

while chieuDaiA <= 0:
    chieuDaiA = float(input("Nhập chiều dài hình thứ nhất: "))

while chieuRongA <= 0:
    chieuRongA = float(input("Nhập chiều rộng hình thứ nhất: "))

chieuDaiB = -1
chieuRongB = -1

while chieuDaiB <= 0:
    chieuDaiB = float(input("Nhập chiều dài hình thứ hai: "))

while chieuRongB <= 0:
    chieuRongB = float(input("Nhập chiều rộng hình thứ hai: "))

dienTichA = chieuDaiA * chieuRongA
dienTichB = chieuDaiB * chieuRongB

if dienTichA > dienTichB:
    print("Hình thứ nhất lớn hơn hình thứ hai")
elif dienTichA < dienTichB:
    print("Hình thứ hai lớn hơn hình thứ nhất")
else:
    print("Hình thứ nhất và hình thứ hai có diện tích bằng nhau")