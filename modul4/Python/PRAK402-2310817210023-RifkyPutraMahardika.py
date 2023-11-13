angka = int(input("Input : "))
# Untuk angka ganjil
print("Output : ")
for i in range(1, angka+1, 2):
    print(i, end=" ")

# Untuk angka genap
print()
for i in range(angka, 1, -2):
    print(i, end=" ")
