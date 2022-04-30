"""
Nhập vào 1 dãy số nguyên
Dừng lại khi nhập -1
Lưu các số vào mảng
Tìm và in ra màn hình phần tử có giá trị lớn nhất, nhỏ nhất và vị trí của phần tử nhỏ nhất và lớn nhất 
"""

arr = []
flag = True

while flag:
    n = int(input("Nhap vao mot so nguyen: "))
    if n == -1:
        flag = False
    else:
        arr.append(n)

indexMin = 0
indexMax = 0

for i in range(len(arr)):
    if arr[i] < arr[indexMin]:
        indexMin = i
    if arr[i] > arr[indexMax]:
        indexMax = i

print("Phan tu nho nhat la: ", arr[indexMin], " tại vị trí: ", indexMin)
print("Phan tu lon nhat la: ", arr[indexMax], " tại vị trí: ", indexMax)
