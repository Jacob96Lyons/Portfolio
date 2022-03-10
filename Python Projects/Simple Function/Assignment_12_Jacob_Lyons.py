import numpy as np
def f(x,y,z):
    if y<=0:
        print('y must be positive.')
    else:
        a=np.cos(x**2)+np.log(y)+z**2
        print('The value of cos x + log y + zˆ2 is',a,'.')
