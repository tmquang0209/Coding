def biggestNumber(numbers):
    biggest = numbers[0]
    for i in range(1, len(numbers)):
        if biggest < numbers[i]:
            biggest = numbers[i]
    return biggest

element = int(input('The number of numbers to compare:'))
arr = []
for i in range(1, element+1):
    print('Enter number', i, ':')
    arr.append(int(input()))

print('The biggest number is:', biggestNumber(arr))