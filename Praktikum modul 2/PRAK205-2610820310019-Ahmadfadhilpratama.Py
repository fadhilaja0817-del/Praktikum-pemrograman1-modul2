import math

data = input().split()
if len(data) >= 2:
    A = int(data[0])
    B = int(data[1])
else:
    A = int(data[0])
    B = int(input())

C = int(round(math.sqrt((B ** 2) - (A ** 2))))

keliling = A + B + C
luas = int(0.5 * C * A)

print(f"Alas = {C} cm")
print(f"Tinggi = {A} cm")
print(f"Keliling = {keliling} cm")
print(f"Luas = {luas} cm^2")