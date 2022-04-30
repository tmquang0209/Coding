#In ra số hoàn hảo trong khoảng từ 1 đến n. 
#Số x là hoàn hảo nếu tổng các ước nhỏ hơn nó bằng chính nó. 

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

n = int(input("Enter a number: "))
if checkPerfectNumber(n):
    print(n, "is a perfect number")
else:
    print(n, "is not a perfect number")