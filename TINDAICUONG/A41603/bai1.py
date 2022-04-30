"""
TODO: Yếu cầu người dùng nhập vào chi phí cho việc vận hành ô tô hàng tháng gồm:
! Thanh toán khoản vay
! Chi phí bảo hiểm
! Chi phí xăng, dầu
! Chi phí gửi xe, bảo dưỡng
* Tổng chi phí hàng tháng, hàng năm
"""


khoanVay = float(input("Nhập khoản vay: "))
baoHiem = float(input("Nhập chi phí bảo hiểm: "))
xang = float(input("Nhập chi phí xăng: "))
dau = float(input("Nhập chi phí dầu: "))
guiXe = float(input("Nhập chi phí gửi xe: "))
baoDuong = float(input("Nhập chi phí bảo dưỡng: "))
#Cach 1
# while khoanVay < 0:
#     khoanVay = float(input("Nhập lại khoản vay: "))

# while baoHiem < 0:
#     baoHiem = float(input("Nhập lại chi phí bảo hiểm: "))

# while xang < 0:
#     xang = float(input("Nhập lại chi phí xăng: "))

# while dau < 0:
#     dau = float(input("Nhập lại chi phí dầu: "))

# while guiXe < 0:
#     guiXe = float(input("Nhập lại chi phí gửi xe: "))

# while baoDuong < 0:
#     baoDuong = float(input("Nhập lại chi phí bảo dưỡng: "))

#Cach 2
while khoanVay < 0 or baoHiem < 0 or xang < 0 or dau < 0 or guiXe < 0 or baoDuong < 0:
    khoanVay = float(input("Nhập lại khoản vay: "))
    baoHiem = float(input("Nhập lại chi phí bảo hiểm: "))
    xang = float(input("Nhập lại chi phí xăng: "))
    dau = float(input("Nhập lại chi phí dầu: "))
    guiXe = float(input("Nhập lại chi phí gửi xe: "))
    baoDuong = float(input("Nhập lại chi phí bảo dưỡng: "))

tongChiPhiHangThang = khoanVay + baoHiem + xang + dau + guiXe + baoDuong
tongChiPhiHangNam = tongChiPhiHangThang * 12

print("Tổng chi phí hàng tháng: ", tongChiPhiHangThang)
print("Tổng chi phí hàng năm: ", tongChiPhiHangNam)