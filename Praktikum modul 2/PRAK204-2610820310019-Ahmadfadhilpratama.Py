import sys

PI = 3.142857

a, b = map(float, sys.stdin.read().split())

volume = PI * (a ** 2) * b
luas = 2 * PI * a * (a + b)
keliling = 2 * PI * a

print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")