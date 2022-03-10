import sympy as sp
x = sp.symbols('x')
z = 1 / ( (x+3) * (x-5) )
part_frac = sp.apart(z)
print("The partial fraction decomposition of z is:", part_frac)
zero = sp.solve(1/z, x)
print("The zeroes of z are:",zero)
zero_at_0 = sp.nsolve(1/z, x, 0)
print("The zeroes of z at x=0 are:",zero_at_0)
##closest number to zero
##‘nsolve’ tries to find an answer near the specified value. Of course, this method can fail and we will investigate this 
##in our final project. ‘nsolve’ can even solve equations with multiple variables as long as you provide enough number
##of equations.
