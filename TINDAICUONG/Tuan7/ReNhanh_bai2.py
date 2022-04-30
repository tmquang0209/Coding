#Nhập vào 3 điểm toán, lý, hóa.
#Tính tổng điểm 3 môn
#Công thức: tongDiem = toan*2 + ly + hoa 
#Nếu tongDiem >= diemTrungTuyen: in ra "Đỗ", ngược lại in ra "Trượt"  


diemToan,diemLy,diemHoa = float(input("Nhập điểm toán: ")),float(input("Nhap diem ly: ")),float(input("Nhap diem hoa: "))
tongDiem = (diemToan*2 + diemLy + diemHoa)
print("Tong diem la: ",tongDiem)

diemTrungTuyen = 25
if tongDiem > diemTrungTuyen:
    print("Đỗ")
else:
    print("Trượt") 


