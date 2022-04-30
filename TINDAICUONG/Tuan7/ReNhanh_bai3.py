#Nhập điểm 3 môn toán, tin, anh vào các biến diemToan, diemTin, diemAnh.
#Tính điểm trung bình 3 môn.
#Nếu điểm trung bình >= 9 thì xếp loại "xuất sắc"
#Nếu điểm trung bình >= 8 và < 9 thì xếp loại "giỏi"
#Nếu điểm trung bình >= 7 và < 8 thì xếp loại "khá"
#Nếu điểm trung bình >= 5 và < 7 thì xếp loại "trung bình"
#Nếu điểm trung bình < 5 thì xếp loại "yếu"

diemToan,diemTin,diemAnh = float(input("Nhap diem Toan: ")),float(input("Nhap diem Tin: ")),float(input("Nhap diem Anh: "))
diemTB = (diemToan * 2 + diemTin + diemAnh)/4
print("Diem trung binh 3 mon la: ",diemTB)
if diemTB >= 9:
    print("Xep loai: Xuat sac")
elif diemTB >= 8 and diemTB < 9:
    print("Xep loai: Gioi")
elif diemTB >= 7 and diemTB < 8:
    print("Xep loai: Kha")
elif diemTB >= 5 and diemTB < 7:
    print("Xep loai: Trung binh")
else:
    print("Xep loai: Yeu")