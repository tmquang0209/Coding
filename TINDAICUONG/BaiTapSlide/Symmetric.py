#số đối xứng
number = 0

while number < 1000:
    number = int(input("Enter number: "))

a = number // 1000
b = (number % 1000) // 100
c = (number % 100) // 10
d = number % 10

if a == d and b == c:
    print("Symmetric")
else:
    print("Not symmetric")