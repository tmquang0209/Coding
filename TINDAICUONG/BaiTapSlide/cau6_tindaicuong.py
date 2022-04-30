def quarterInTheYear(month):
    if month in range(1,4):
        return 1
    elif month in range(4,7):
        return 2
    elif month in range(7,10):
        return 3
    elif month in range(10,13):
        return 4
    else:
        return 0

month = int(input("Enter month: "))
quarter = quarterInTheYear(month)
print("The quarter is:",quarter)

# n = int(input("Enter n: "))
# s=0
# if n % 2 == 0:
#     for i in range(2,n+1,2):
#         s += i
# else: 
#     for i in range(1,n+1,2):
#         s += i
# print("The sum is:",s)