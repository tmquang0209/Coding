"""
Nhập 2 mảng và gộp mảng
"""

arrA = []
arrB = []

flag  = True
while flag:
    num = int(input("Nhập số nguyên cho mảng A: "))
    if num < 0:
        flag = False
    else:
        arrA.append(num)

flag = True
while flag:
    num = int(input("Nhập số nguyên cho mảng B: "))
    if num < 0:
        flag = False
    else:
        arrB.append(num)

arr = []
for i in range(len(arrA)):
    arr.append(arrA[i])
for i in range(len(arrB)):
    arr.append(arrB[i])

print("Mảng sau khi gộp: ", end="")
for i in range(len(arr)):
    print(arr[i], end=" ")