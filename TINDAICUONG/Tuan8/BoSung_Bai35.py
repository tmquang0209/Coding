"""
Nhập vào x và n hãy tính tổng dãy số sau:
S(x,n)=x+  x^2/2!  +  x^3/3!  +  x^4/4!+⋯+  x^n/n!
"""
def tinhGiaiThua(x):
    if x == 0:
        return 1
    else:
        return x * tinhGiaiThua(x-1)

x = int(input("Nhập x: "))
n = int(input("Nhập n: "))
sum = 0
while n < 0 or x < 0:
    x = int(input("Nhập x: "))
    n = int(input("Nhập n: "))

for i in range(1, n + 1):
    if i == 1:
        sum = x
    else:
        sum += x ** i / tinhGiaiThua(i)

print("Tổng dãy số là S=", sum)