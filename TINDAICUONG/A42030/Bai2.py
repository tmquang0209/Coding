n = int(input("Nhập vào số n:"))

while n <= 0:
    n = int(input("Nhập lại số n:"))

sum = 0
for i in range(2, n + 1):
    sum += (i -1)*i

print("Tổng cần tìm là S=", sum)