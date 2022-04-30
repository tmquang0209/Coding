# arrHoTen = []
# arrDiemTrungBinh = []

# n = int(input("Nhap so luong sinh vien: "))

# while n <= 0:
#     n = int(input("Nhap so luong sinh vien: "))

# for i in range(n):
#     hoTen = input("Nhap ho ten sinh vien: ")
#     arrHoTen.append(hoTen)

#     diemToan = float(input("Nhap diem toan: "))
#     diemTin = float(input("Nhap diem tin: "))
#     diemAnh = float(input("Nhap diem anh: "))

#     while diemToan < 0 or diemToan > 10 or diemTin < 0 or diemAnh < 0 or diemAnh > 10:
#         print("Diem khong hop le. Nhap lai!")
#         diemToan = float(input("Nhap diem toan: "))
#         diemTin = float(input("Nhap diem tin: "))
#         diemAnh = float(input("Nhap diem anh: "))

#     diemTrungBinh = (diemToan*2 + diemTin*2 + diemAnh) / 5
#     arrDiemTrungBinh.append(diemTrungBinh)

# for i in range(n):
#     print("Ho ten: ", arrHoTen[i], "\tDiem trung binh: ", arrDiemTrungBinh[i])


n = int(input("Nhap so luong sinh vien: "))

result = ""
i = 1

while i <= n:
    hoTen = input("Nhap ho ten sinh vien: ")
    diemToan = float(input("Nhap diem toan: "))
    diemTin = float(input("Nhap diem tin: "))
    diemAnh = float(input("Nhap diem anh: "))

    while diemToan < 0 or diemToan > 10 or diemTin < 0 or diemAnh < 0 or diemAnh > 10:
        print("Diem khong hop le. Nhap lai!")
        diemToan = float(input("Nhap diem toan: "))
        diemTin = float(input("Nhap diem tin: "))
        diemAnh = float(input("Nhap diem anh: "))

    diemTrungBinh = (diemToan*2 + diemTin*2 + diemAnh) / 5

    result += "Ho ten: " + hoTen + "\tDiem trung binh: " + str(diemTrungBinh) + "\n"

    i += 1

print(result)