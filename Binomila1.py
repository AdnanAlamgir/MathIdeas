
def coeff(n, r):
    facn = 1
    facr = 1
    facnr = 1
   
    for i in range(1, n + 1):
        facn *= i
    for i in range(1, r + 1):
        facr *= i
    for i in range(1, (n - r) + 1):
        facnr *= i
    coeff = (facn) / (facr * facnr)
    return coeff
a = int(input("enter value for n: "))
for j in range(a):
    print("[", int(coeff(a, j)), "* x^", j, "* y^", a - j, "] +", end=" ")

j = a
print("[", int(coeff(a, j)), "* x^", j, "* y^", a - j, "]", end=" ")



 
        
