tongChan = 0
tongLe = 0
for i in range(1, 6):
    n = int(input("Nhap so thu {number}: ".format(number = i)))
    if n % 2 == 0:
        tongChan += n
    else:
        tongLe += n
print("Tong cac so chan:",tongChan)
print("Tong cac so le:",tongLe)