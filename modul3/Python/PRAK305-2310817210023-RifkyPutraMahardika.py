nilai = int(input("Input : "))
hari = nilai // 86400
detik = nilai % 86400
jam = detik // 3600
detik = nilai % 3600
menit = detik // 60
detik = nilai % 60
if hari > 0:
    print(f"Output : {hari} hari {jam:02d}:{menit:02d}:{detik:02d}")
else:
    print(f"Output : {jam:02d}:{menit:02d}:{detik:02d}")
