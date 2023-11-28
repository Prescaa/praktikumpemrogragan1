def reverse(angka):
    Reverseangka = 0
    while angka != 0:
        digit = angka % 10
        Reverseangka = Reverseangka * 10 + digit
        angka //= 10
    return Reverseangka

A, B = map(int, input().split())
A = reverse(A)
B = reverse(B)
C = A + B
print(reverse(C))