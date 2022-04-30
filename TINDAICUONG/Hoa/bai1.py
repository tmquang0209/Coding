"""
Nhập vào 1 dãy số nguyên, dừng lại khi nhập -1, lưu các số đã nhập vào mảng. 
In ra màn hình các số lẻ trong dãy số đã nhập, tiếp theo là những số 0, sau đó là những số chẵn.
"""

arr = []
flag = True
while flag:
    num = int(input("Nhap vao mot so: "))
    if num == -1:
        flag = False
    else:
        arr.append(num)

text = ""
for i in arr:
    if i % 2 == 1:
        text += str(i) + " "

for i in arr:
    if i == 0:
        text += str(i) + " "

for i in arr:
    if i % 2 == 0:
        text += str(i) + " "

print(text)