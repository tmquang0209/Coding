arr = []
flag = True

while flag:
    n = int(input("Nhap so nguyen duong n: "))
    if n < 0:
        flag = False
    else:
        arr.append(n)

print("Giá trị nhỏ nhất trong mảng: ", min(arr))
print("Giá trị lớn nhất trong mảng: ", max(arr))

num = int(input("Nhap so nguyen duong n: "))
print("Phần tử", num, "xuất hiện", arr.count(num), "lần trong mảng")
