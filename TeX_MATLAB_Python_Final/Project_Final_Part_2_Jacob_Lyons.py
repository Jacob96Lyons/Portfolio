import sympy as sp
import math

def TaylorPolynomial(f,m=10,c=0):
  
    if type(m)!=int or m<0:
        raise ValueError("m needs to be positive integer")
    if not isinstance(c,int) and not isinstance(c,float):
        raise ValueError("c needs to be a real number")
    
    var=f.free_symbols 
    y=list(var)[0]
    poly=0
    for n in range(m+1): 
        poly+=sp.diff(f,y,n).subs(y,c)*(y-c)**n/math.factorial(n)  

    plot1=sp.plotting.plot(f,(y,c-10,c+10),line_color='red',show=False,legend=True,)
    plot2=sp.plotting.plot(poly,(y,c-10,c+10),line_color='green',show=False,legend=True)
    plot1.extend(plot2)
    plot1.show()
  
# example
x=sp.Symbol('x') # declare x as symbol
f=sp.exp(x)
TaylorPolynomial(f,m=10,c=5)

