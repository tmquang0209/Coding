"""
TODO: Nhập vào tốc độ (km/h) và thời gian (giờ) đi
* Hiển thị ra quãng đường đi trong mỗi giờ
"""

#Gán giá trị -1 cho tốc độ và thời gian để đưa vào vong lặp
tocDo = -1 
thoiGian = -1

#Nếu nhập tốc độ <= 0 thì cho người dùng nhập lại
while tocDo <= 0:
    tocDo = float(input("Nhập tốc độ (km/h): "))

#Nếu nhập thời gian <= 0 thì cho người dùng nhập lại
while thoiGian < 0:
    thoiGian = float(input("Nhập thời gian (giờ): "))

#Sử dụng vòng lặp để tính quãng đường đi trong mỗi giờ
print()
print("Thời gian (giờ) |Quãng đường đi (km)")

if thoiGian < 1:
    print(thoiGian,"\t\t|",tocDo*thoiGian)
else:
    thoiGianLamTron = int(round(thoiGian))
    if thoiGianLamTron == thoiGian:
        for i in range(1, thoiGianLamTron+1):
            print(i, "\t\t|",tocDo * i)
    else:
        for i in range(1, thoiGianLamTron+1):
            print(i, "\t\t|",tocDo * i)
        print(thoiGian, "\t\t|",tocDo * thoiGian)