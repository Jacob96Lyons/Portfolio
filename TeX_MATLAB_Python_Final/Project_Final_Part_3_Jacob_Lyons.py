import math as ma
import matplotlib.pyplot as plt

class circle:

    def __init__(a,x=0,y=0,r=1):
        a.x=x
        a.y=y
        a.r=r

    def area(a):
        return ma.pi*a.r*a.r

    def circumference(a):
        return 2*ma.pi*a.r

    def inside_circle(a, p, q):
        if((p-a.x)**2+(q-a.y)**2<a.r**2):
            print("Given point is in the circle.")
        else:
            print("Given point is not in the circle.")

    def plot(a):
        circle = plt.Circle((a.x, a.y), a.r, color = 'red')
        fix, ax = plt.subplots()
        ax.add_artist(circle)
        plt.ylim(a.y-a.r*2, a.y+a.r*2)
        plt.xlim(a.x-a.r*2, a.x+a.r*2)
        plt.title('Circle')
        plt.show()

c = circle()
print("Area = ", c.area())
print("Circumference = ", c.circumference())
c.inside_circle(1,1)
c.plot()

class rectangle:

    def __init__(a,x=0,y=0,w=1,h=1):
        a.x=x
        a.y=y
        a.w=w
        a.h=h

    def check_square(a):
        if(a.w==a.h):
            print("It is a square.")
        else:
            print("It is not a square.")

    def area(a):
        return a.w*a.h

    def perimeter(a):
        return 2*(a.w + a.h)

    def check_inside(a,p,q):
        A = (a.x-a.w/2, a.y-a.h/2)
        B = (a.x-a.w/2, a.y+a.h/2)
        C = (a.x+a.w/2, a.y+a.h/2)
        D = (a.x+a.w/2, a.y-a.h/2)

        if(2*p <= 2*a.x+a.w and 2*p>=2*a.x-a.w and 2*q<=2*a.y+a.h and 2*q>=2*a.y-a.h):
            print("Given point is in the rectangle")
        else:
            print("Given point is not in the rectangle")

    def plot(a):
        r = plt.Rectangle((a.x-a.w/2, a.y-a.h/2), a.w, a.h, color = 'green')
        fix, ax = plt.subplots()
        ax.add_artist(r)
        plt.ylim(a.y-a.h, a.y+a.h)
        plt.xlim(a.x-a.w, a.x+a.w)
        plt.title('Rectangle')
        plt.show()
        
r1 = rectangle(h=2)
r1.check_square()
print("Area = ", r1.area())
print("Perimeter = ", r1.perimeter())
r1.check_inside(2,1)
r1.plot()
