#giải phương trình bậc 2
import math
a = float(input("Nhập a: "))
b = float(input("Nhập b: "))
c = float(input("Nhập c: "))
if a == 0:
    if b == 0:
        if c == 0:
            print("Phương trình có vô số nghiệm")
        else:
            print("Phương trình vô nghiệm")
    else:
        print("Phương trình có 1 nghiệm x =", -c/b)
else:
    delta = b**2 - 4*a*c
    if delta < 0:
        print("Phương trình vô nghiệm")
    elif delta == 0:
        print("Phương trình có nghiệm kép x1 = x2 =", -b/(2*a))
    else:
        print("Phương trình có 2 nghiệm phân biệt")
        print("x1 =", (-b + math.sqrt(delta))/(2*a))
        print("x2 =", (-b - math.sqrt(delta))/(2*a))