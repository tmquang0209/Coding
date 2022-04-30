#In ra màn hình tam giác vuông, tam giác cân

chieuCao = int(input("Nhập chiều cao: "))

while chieuCao < 1:
    chieuCao = int(input("Nhập chiều cao: "))

print("-------------------")
#Tam giac vuông trái
for i in range(1, chieuCao + 1):
    print("*" * i)
print("-------------------")
z = 1
for j in range(chieuCao,0,-1):
    print((chieuCao - z)* " ", end = "")
    print("*" * z)
    z += 1
print("-------------------")
k = 0
#Tam giác cân 
for i in range(1, chieuCao+1):
    s = chieuCao - i
    k = s * " "
    print(k, end=" ")
    print(((2*i)-1)*"*")

