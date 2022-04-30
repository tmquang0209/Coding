#Nhập vào 1 số nguyên n. Tính tổng các số chẵn, tổng các số lẻ từ 1 đến n và in ra màn hình

n = int(input("Nhap vao mot so nguyen: "))

tongChan = 0
tongLe = 0
i = 1

while i <= n:
    if i % 2 == 0:
        tongChan += i
    else:
        tongLe += i
    i += 1

print("Tong cac so chan: ", tongChan)
print("Tong cac so le: ", tongLe)