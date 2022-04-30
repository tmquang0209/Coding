num = -1
while num < 0 or num > 99:
    num = int(input("Enter a number: "))

num2words_less_10 = {0: "không", 1: "một", 2: "hai", 3: "ba",
                     4: "bốn", 5: "lăm", 6: "sáu", 7: "bảy", 8: "tám", 9: "chín"}
two_digits = {10: "mười", 11: "mười một", 12: "mười hai", 13: "mười ba", 14: "mười bốn",
              15: "mười lăm", 16: "mười sáu", 17: "mười bảy", 18: "mười tám", 19: "mười chín"}
tens_multiple = {20: "hai mươi", 30: "ba mươi", 40: "bốn mươi", 50: "năm mươi",
                 60: "sáu mươi", 70: "bảy mươi", 80: "tám mươi", 90: "chín mươi"}
if num < 0 or num >= 100:
    print("Input must be between 0 and 99")
else:
    if num < 10:
        print(num2words_less_10[num])
    elif 10 <= num < 20:
        print(two_digits[num])
    elif 20 <= num < 100:
        if num % 10 == 0:
            print(tens_multiple[num])
    else:
        print(tens_multiple[num // 10 * 10], num2words_less_10[num % 10])
