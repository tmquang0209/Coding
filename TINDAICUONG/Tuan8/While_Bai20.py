#Nhập vào n số nguyên từ bàn phím. Hãy tính tổng n số vừa nhập và in ra màn hình

n = int(input("Nhap vao so nguyen n: "))

i = 1
sum = 0
while n <= 0:
    n = int(input("Nhap vao so nguyen n: "))
else: 
    while i <= n:
        num = int(input("Nhap vao so thu " + str(i) + ": "))
        sum += num
        i += 1
print("Tong cac so vua nhap la: " + str(sum))