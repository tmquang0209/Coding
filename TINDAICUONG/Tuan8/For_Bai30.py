"""
Nhập vào n. Hãy tính tổng dãy số sau và in ra màn hình 
S=1+  1/2!+  1/3!+  1/4!+⋯+  1/n!  (n>=1)
"""
def tinhGiaiThua(n):
    if n == 1:
        return 1
    return n * tinhGiaiThua(n-1)

sum = 0
n = int(input("Nhap n: "))

for i in range(1, n + 1):
    sum += 1 / tinhGiaiThua(i)

print("Tong S=", sum)