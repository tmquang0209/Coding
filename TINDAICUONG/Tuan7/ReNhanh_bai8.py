#Viết chương trình nhập vào 4 số nguyên. Hãy in ra số nhỏ nhất 

num1 = int(input("Nhap vao so thu nhat: "))
num2 = int(input("Nhap vao so thu hai: "))
num3 = int(input("Nhap vao so thu ba: "))
num4 = int(input("Nhap vao so thu tu: "))

if(num1 < num2 and num1 < num3 and num1 < num4):
    print("So nho nhat la: ", num1)
elif(num2 < num1 and num2 < num3 and num2 < num4):
    print("So nho nhat la: ", num2)
elif(num3 < num1 and num3 < num2 and num3 < num4):
    print("So nho nhat la: ", num3)
else:
    print("So nho nhat la: ", num4)