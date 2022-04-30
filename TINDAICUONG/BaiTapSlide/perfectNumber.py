#số hoàn hảo
def checkPerfectNumber(num):
    sum = 0
    for i in range(1, num):
        if num % i == 0:
            sum += i
    if sum == num:
        return True
    else:
        return False

def printPrime(num):
    for i in range(2, num):
        if checkPerfectNumber(i):
            print(i)

n = int(input("Enter a number: "))
printPrime(n)