#Chuyển thập phân thành nhị phân

n = int(input("Nhập n:"))
s = ""
while n > 0:
    du = n % 2
    thuong = n // 2
    s = str(du) + s
    if thuong > 0:
        n = n // 2
    else:
        break
print("Số nhị phân của số thập phân là:", s)

