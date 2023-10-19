import math

A, B = map(float, input().split())
C = math.sqrt(pow(B, 2) - pow(A, 2))
Keliling = A+B+C
Luas = (C*A)/2
print(f"Alas = {C:.0f} cm")
print(f"Tinggi = {A:.0f} cm")
print(f"Keliling = {Keliling:.0f} cm")
print(f"Luas = {Luas:.0f} cm^2")