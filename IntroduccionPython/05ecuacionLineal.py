#pycharm
#ecuacion Lineal

import os
os.system('cls' if os.name == 'nt' else 'clear')


print("Ecuacion Lineal")
print("aX+b=0  X=-b/a")

a=float(int(input("a:")))
b=float(int(input("b:")))



x=-b/a
x=round(x,0)

print("X=",x)

