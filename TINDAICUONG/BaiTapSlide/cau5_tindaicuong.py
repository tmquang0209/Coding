input = input("Enter a calculations: ")

split_input = input.split(" ")

a = int(split_input[0])
sign = split_input[1]
b = int(split_input[2])

if sign == "+":
    print(a + b)
elif sign == "-":
    print(a - b)
elif sign == "*":
    print(a * b)
elif sign == "/":
    print(a / b)