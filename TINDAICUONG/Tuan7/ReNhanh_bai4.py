#giải phương trình bậc nhất
import math
a = float(input("Nhập a: "))
b = float(input("Nhập b: "))

if a == 0:
    if b == 0:
        print("Phương trình vô số nghiệm")
    else:  
        print("Phương trình vô nghiệm")
else:
    print("Phương trình có nghiệm x = ", -b/a)