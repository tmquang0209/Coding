#Nhập vào họ tên, điểm toán, tin, anh của 1 sinh viên.
#Sau đó in ra họ tên và ĐTB của sinh viên đó. Biết ĐTB = (Toán*2+Tin*2+Anh)/5

hoTen = input("Nhap vao ho ten: ")

diemToan = float(input("Nhap vao diem toan: "))
diemTin = float(input("Nhap vao diem tin: "))
diemAnh = float(input("Nhap vao diem anh: "))

while diemToan < 0 or diemToan > 10 or diemTin < 0 or diemTin > 10 or diemAnh < 0 or diemAnh > 10:
    print("Diem khong hop le. Nhap lai")
    diemToan = float(input("Nhap vao diem toan: "))
    diemTin = float(input("Nhap vao diem tin: "))
    diemAnh = float(input("Nhap vao diem anh: "))
    
diemTrungBinh = (diemToan*2+diemTin*2+diemAnh)/5

print("Ho ten: ", hoTen)
print("Diem trung binh: ", diemTrungBinh)