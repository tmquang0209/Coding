#Số chính phương
def isMainNumber(n):
    flag = 0
    if any(i**2 == n for i in range(n+1)):
        flag = 1
    return flag

def printMainNumber(n):
    for i in range(n+1,0,-1):
        if isMainNumber(i):
            print(i)
            break

n = int(input('Enter n: '))
printMainNumber(n)