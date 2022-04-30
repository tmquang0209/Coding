"""
Nhập vào n. Hãy tính tổng dãy số sau và in ra màn hình 
S=1+  1/(1*2)+  1/(2*3)+  1/(3*4)+⋯+  1/((n-1)*n) (n>=2)
"""

sum = 1
n = int(input("Nhap n: "))

while n < 2:
    n = int(input("Nhap lai n: "))

for i in range(2, n + 1):
    sum += 1 / (i * (i - 1))

print("Tong dau ra: ", sum)