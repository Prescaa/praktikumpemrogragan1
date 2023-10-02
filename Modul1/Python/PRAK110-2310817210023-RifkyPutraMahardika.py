import math
Alas=5; Tinggi=12
Miring=round(math.sqrt(pow(Alas, 2)+pow(Tinggi, 2)))
Keliling=round(Tinggi+Alas+Miring)
Luas=round((Alas*Tinggi)/2)
print("Diketahui :")
print(f"Alas = {Alas} cm")
print(f"Tinggi = {Tinggi} cm")
print("Jawab :")
print(f"Sisi A = {Tinggi} cm")
print(f"Sisi B = {Miring} cm")
print(f"Sisi C = {Alas} cm")
print(f"Keliling = {Keliling}")
print(f"Luas = {Luas} cm")
