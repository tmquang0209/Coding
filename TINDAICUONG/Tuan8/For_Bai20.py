#Nhập vào n số nguyên từ bàn phím. Hãy tính tổng n số vừa nhập và in ra màn hình
sum = 0
for i in range(int(input("Nhap so nguyen: "))):
    num = int(input("Nhap so thu %d: " % (i+1)))
    sum = sum + num

print("Tong cac so vua nhap la: ", sum)