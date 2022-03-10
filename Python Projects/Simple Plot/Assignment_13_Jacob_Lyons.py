import numpy as np
import matplotlib.pyplot as plt
def rplot(f,a=0,b=1,n=10):
    if n<=0:
        raise ValueError('n must be positive.',n)
        ###check if n is positive
    par=(b-a)/1000
    x = np.arange(a,b,par)
    plt.plot(x,f(x))
    w = (b-a)/n   ###width of each bar
    x2 = np.arange(a,b,w)
    plt.bar(x2,f(x2+w),align='edge',color='tan',\
            edgecolor='black',width=w,alpha=.8)
    ###options for bars. \ is for multi-line command
    plt.show()
    ###plot both line plot and bar graph

def f(x):
    return x**2
rplot(f)
