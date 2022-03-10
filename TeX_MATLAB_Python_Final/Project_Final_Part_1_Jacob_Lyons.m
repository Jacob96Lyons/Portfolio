clear all
clc

n = input('Enter the order of polynomial n: ');
while n < 1
    disp('n must be a positive integer')
    n = input('Enter the order of polynomial n: ');
end

for i = 0 : n 
    if i < n
        fprintf('Enter the coefficient for %d',i+1);
        coefficient(i+1) = input(': ');
    else
        lastc = input('Enter the last coefficient: ');
        while lastc == 0
           fprintf('The last coefficient must be nonzero\n');
           lastc = input('Enter the last coefficient: ');
        end
        coefficient(i+1) = lastc;
    end
end

x_0 = input('Enter the starting point x_0: ');
m = 0 : n;
dx = 1e-6;
f = @(x)sum(coefficient.*(x.^m));
df = @(x)(f(x+dx)-f(x))/dx;  
iterations = 1;        
x_m = x_0;      
found = true;

while abs(f(x_m)) > 1e-14 
    
    x_m = x_m - f(x_m) / df(x_m);
   
    if iterations > 1e10 || f(x_m) > 1e30 || df(x_m) < 1e-100
        disp('Couldn''t find a root.')
        found = false;
        break
    end
    if f(x_m) > 1e-14 && df(x_m) == 0
        disp('The method failed. Pick another starting point.')
        found = false;
        break
    end
   
   iterations = iterations + 1;  
end

if found
    fprintf('The solution to the given polynomial is %0.4f \n',x_m)
end