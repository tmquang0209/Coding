"""
TODO: Tam giác số
Input: nhập vào 1 số nguyên dương
Ouput: tam giác có dạng
1
1 2
1 2 3
...
"""

n = -1
while n <= 0:
    n = int(input("Nhập số nguyên dương: "))

for i in range(1, n + 1):
    for j in range(1, i + 1):
        print(j, end=" ")
    print()