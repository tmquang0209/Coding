#Nhập vào 1 số nguyên N, in ra số lượng ước số của N

n = int(input("Nhập vào 1 số nguyên N: "))

count = 0
for i in range(1, n + 1):
    if n % i == 0:
        count += 1

print("Số lượng ước số của N: ", count)