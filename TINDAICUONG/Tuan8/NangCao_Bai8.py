#In ra số chính phương lớn nhất nhỏ hoặc bằng N 
import math

n = int(input("Nhập n: "))

while n < 0:
    n = int(input("Nhập lại n: "))

for i in range(n, 0, -1):
    canBacHai = math.sqrt(i)
    if canBacHai**2 == i:
        print(i)
        break

