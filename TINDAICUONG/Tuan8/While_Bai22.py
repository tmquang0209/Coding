#Nhập vào n số nguyên dương từ bàn phím. Hãy in ra số lớn nhất trong các số vừa nhập

n = int(input("Nhap n: "))
max = 0
while n > 0:
    if n > max:
        max = n
    n = int(input("Nhap n: "))

print("So lon nhat la: ", max)