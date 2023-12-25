phi = 22.00/7.00

radius  = float(input(" "))
tinggi  = float(input(" "))
volume1    = phi*radius*radius*tinggi
luas1      = 2*phi*radius*(radius+tinggi)
keliling1  = 2*phi*radius

print(f"Volume   = {volume1:.2f}")
print(f"Luas     = {luas1:.2f}")
print(f"Keliling = {keliling1:.2f}\n")

radius, tinggi  = map(float,input(" ").split())
volume2    = phi*radius*radius*tinggi
luas2      = 2*phi*radius*(radius+tinggi)
keliling2  = 2*phi*radius

print(f"Volume   = {volume2:.2f}")
print(f"Luas     = {luas2:.2f}")
print(f"Keliling = {keliling2:.2f}")

