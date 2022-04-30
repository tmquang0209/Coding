#Hãy cho người dùng nhập vào 1 số từ 0 đến 10, nếu sai cho nhập lại đến khi đúng thì in ra số vừa nhập 

num = -1
while num <= 0 or num > 10:
    num = int(input("Enter a number from 1 to 10: "))

print("You entered: ", num)