#Nhập vào số nguyên n. Cho biết số đó có phải số nguyên tố không?
def isPrime(n):
    if n < 2:
        return False
    for i in range(2, n):
        if n % i == 0:
            return False
    return True

n = int(input("Nhập số nguyên n: "))
if isPrime(n):
    print("Số nguyên tố")
else:
    print("Số nguyên không tố")
    