arrHoTen = []
arrDiemTrungBinh = []

n = int(input("Nhap so luong sinh vien: "))

while n <= 0:
    n = int(input("Nhap so luong sinh vien: "))
    
for i in range(n):
    hoTen = input("Nhap ho ten sinh vien: ")
    arrHoTen.append(hoTen)

    diemToan = float(input("Nhap diem toan: "))
    diemTin = float(input("Nhap diem tin: "))
    diemAnh = float(input("Nhap diem anh: "))

    while diemToan < 0 or diemToan > 10 or diemTin < 0 or diemAnh < 0 or diemAnh > 10:
        print("Diem khong hop le. Nhap lai!")
        diemToan = float(input("Nhap diem toan: "))
        diemTin = float(input("Nhap diem tin: "))
        diemAnh = float(input("Nhap diem anh: "))

    diemTrungBinh = (diemToan*2 + diemTin*2 + diemAnh) / 5
    arrDiemTrungBinh.append(diemTrungBinh)

DTBCaoNhat = arrDiemTrungBinh[0]
for i in range(n):
    if DTBCaoNhat < arrDiemTrungBinh[i]:
        DTBCaoNhat = arrDiemTrungBinh[i]
        index = i

for i in range(n):
    if arrDiemTrungBinh[i] == DTBCaoNhat:
        print("{} - {}".format(arrHoTen[i], arrDiemTrungBinh[i]))