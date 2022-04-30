#Đếm ước
n = int(input("Enter n: "))

count = 0
for i in range(1,n+1):
    if n % i == 0:
        count += 1

print("The estimated number:", count)

