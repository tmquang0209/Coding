#Nhập vào n số nguyên từ bàn phím. 
#Hãy đếm trong n số vừa nhập có bao nhiêu số chia hết cho 3 và in ra màn hình
n = int(input("Nhap n: "))
count = 0
daySoChiaHetCho3 = ""
for i in range(n):
    num = int(input("Nhap so thu " + str(i+1) + ": "))
    if num % 3 == 0:
        count += 1
        daySoChiaHetCho3 += str(num) + " "
print("So chia het cho 3 trong n so vua nhap la: ", count)
print("So chia het cho 3 trong n so vua nhap la: ", daySoChiaHetCho3)