"""
Nhập vào 1 số nguyên có 4 chữ số. 
Kiểm tra số đó có phải là đối xứng không? 
VD: số đối xứng: 1221, 4444; số không đối xứng: 1000, 5544
"""
def kiemTraDoiXung(n):
    if n < 1000 or n > 9999:
        return False
    else:
        hangNghin = n // 1000
        hangChuc = n //100 % 10
        hangTram = n // 10 % 10
        hangDonVi = n % 10
        if hangNghin == hangDonVi and hangChuc == hangTram:
            return True
        else:
            return False

n = int(input("Nhập vào 1 số nguyên có 4 chữ số: "))
if kiemTraDoiXung(n):
    print("Số đối xứng")
else:
    print("Số không đối xứng")