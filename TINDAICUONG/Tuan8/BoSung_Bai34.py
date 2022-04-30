"""
Nhập vào n hãy tính tổng dãy số sau:
S=1+  2/(1*2)+  3/(2*3)+  4/(3*4)+⋯+  n/((n-1)*n)
"""

n = int(input("Nhập n: "))
while n <= 0:
    n = int(input("Nhập n: "))

sum = 0
for i in range(1, n+1):
    if i == 1:
        sum = 1
    else:
        sum += i / (i * (i - 1))

print("Tổng dãy số là S=", sum)