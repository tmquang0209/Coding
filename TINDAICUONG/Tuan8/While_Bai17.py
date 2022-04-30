#In ra màn hình n chữ “Hello”, với n nhập vào từ bàn phím

n = int(input("Nhap n: "))
if n < 0:
    print("Nhap sai")
else:
    i = 1
    while i <= n:
        print("Hello")
        i = i + 1