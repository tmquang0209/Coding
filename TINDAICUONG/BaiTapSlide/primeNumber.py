def isPrime(n):
    if n == 1:
        return False
    for i in range(2, n):
        if n % i == 0:
            return False
    return True

number = int(input("Enter a number: "))
if isPrime(number):
    print("The number is prime")
else:
    print("The number is not prime")