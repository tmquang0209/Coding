#Nhập vào 1 tháng và in ra mùa
month = int(input("Nhập vào tháng: "))

if month >= 1 and month <= 3:
    print("Tháng này là tháng mùa xuân")
elif month >= 4 and month <= 6:
    print("Tháng này là tháng mùa hạ")
elif month >= 7 and month <= 9:
    print("Tháng này là tháng mùa thu")
elif month >= 10 and month <= 12:
    print("Tháng này là tháng mùa đông")
else:
    print("Không phải là tháng mùa nào")