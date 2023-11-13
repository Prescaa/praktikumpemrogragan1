angka1, angka2 = map(int, input("Input: "). split())

print("Output: ", end="")
if angka1 < angka2:
    for i in range(angka1, angka2+1):
        print(i, angka1+angka2-i, end="")
        if i < angka2:
            print(" - ", end="")
elif angka2 < angka1:
    for i in range(angka1, angka2-1, -1):
        print(i, angka1+angka2-i, end="")
        if i > angka2:
            print(" - ", end="")