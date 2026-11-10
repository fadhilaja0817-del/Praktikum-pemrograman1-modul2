a = float(input("Masukkan Nilai Pertama : "))
b = float(input("Masukkan Nilai Kedua : "))

hasil = a + b

if a.is_integer():
    a_str = str(int(a))
else:
    a_str = str(a)

print(
    f'Hasil dari penjumlahan nilai pertama "{a_str}" dan nilai kedua "{b}" adalah "{hasil:.2f}"'
)