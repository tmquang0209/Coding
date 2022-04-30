#Viết chương trình nhập vào 3 số nguyên. Hãy in ra số lớn nhất 

num1 = int(input("Nhap so thu nhat: "))
num2 = int(input("Nhap so thu hai: "))
num3 = int(input("Nhap so thu ba: "))

if num1 > num2 and num1 > num3:
    print("So lon nhat la: ", num1)
elif num2 > num1 and num2 > num3:
    print("So lon nhat la: ", num2)
else:
    print("So lon nhat la: ", num3)