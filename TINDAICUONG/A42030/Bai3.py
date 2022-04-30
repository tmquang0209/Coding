n = int(input("Nhap số thứ 1: "))

max = n
i = 2
while n > 0:
    n = int(input("Nhap số thứ {0}: ".format(i)))
    if n > max:
        max = n
    i += 1

print("Max: ", max)