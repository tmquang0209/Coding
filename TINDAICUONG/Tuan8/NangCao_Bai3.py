#Nhập vào n số bất kỳ. Tìm và in ra số lớn nhất trong N số vừa nhập
#Ví dụ: Nhập vào 5 số: 1, 2, 3, 4, 5. In ra số lớn nhất là 5

n = int(input("Nhập vào số n: "))
while n < 1:
    n = int(input("Nhập lại số n: "))

num = int(input("Nhập vào số thứ 1: "))
max = num
for i in range(2, n + 1):
    num = int(input("Nhập vào số thứ " + str(i) + ": "))
    if num > max:
        max = num
print("Số lớn nhất là: " + str(max))