#Vị trí số nguyên tố thứ n
def isPrime(n):
    if n < 2:
        return False
    for i in range(2, n):
        if n % i == 0:
            return False
    return True

def getPrime(n):
   count = 0
   i = 0
   while count < n:
       if(isPrime(i)):
           count += 1
       if(count == n):
           break
       i += 1
   return i
       
n = int(input('Enter n: '))
print(getPrime(n))
