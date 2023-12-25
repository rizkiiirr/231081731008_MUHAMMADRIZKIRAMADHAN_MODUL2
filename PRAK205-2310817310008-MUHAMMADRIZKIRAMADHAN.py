import math

A1, B1 = map(int,input(" ").split())
alas1     = round(math.sqrt(B1*B1-A1*A1))
keliling1 = round(A1+B1+alas1)
luas1     = round(0.5*alas1*A1)

print(f"Alas     = {alas1} cm")
print(f"Tinggi   = {A1} cm")
print(f"Luas     = {keliling1} cm")
print(f"Keliling = {luas1} cm^2\n")

A2  = int(input(" "))
B2  = int(input(" "))
alas2     = round(math.sqrt(B2*B2-A2*A2))
keliling2 = round(A2+B2+alas2)
luas2     = round(0.5*alas2*A2)

print(f"Alas     = {alas2} cm")
print(f"Tinggi   = {A2} cm")
print(f"Luas     = {keliling2} cm")
print(f"Keliling = {luas2} cm^2")
