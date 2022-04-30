#Cho người dùng nhập vào 1 số, sau đó hỏi “Bạn có muốn nhập tiếp không?”. 
#Nếu người dùng trả lời “C” thì tiếp tục nhập vào 1 số, ngược lại thì dừng.
#Hãy in ra trung bình các số vừa nhập.

answer = "C"
count = 0
sum = 0

while answer == "C":
    n = int(input("Nhap vao mot so: "))
    sum += n
    count += 1
    answer = input("Ban co muon nhap tiep khong? (C/K): ")
    if answer == "C":
        continue
    else:
        break

print("Trung binh cac so vua nhap la: ", sum/count)