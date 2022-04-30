count = 0
for a in range(0,78):
    for b in range(0,78):
        for c in range(0,78):
            for d in range(0,78):
                if 3*a+4*(b-2)+2*c+d==78:
                    print(a,b,c,d) 
                    count += 1

print("Có tất cả", str(count), "trường hợp thỏa mãn điều kiện của đề bài")
