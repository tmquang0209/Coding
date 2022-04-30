n = int(input("Nhập số phần tử của mảng: "))

arr = []
for i in range(n):
    arr.append(int(input("Nhập phần tử thứ " + str(i+1) + " của mảng: ")))

for i in range(n):
    if arr[i] % 2 == 0 and arr[i] < 60:
        print(arr[i], end=" ")

