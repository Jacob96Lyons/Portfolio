clear all
clc
r = 0;  %%this will be my result.
x = [0,0.1,0.3,0.34,0.54,0.6,0.66,0.73,0.8,0.9,0.93,1];     %%partition
for i=1:length(x)-1     %%start of a for loop.
r = r+sin((x(i+1)+x(i))/2)*(x(i+1)-x(i));
   %%This is a checkpoint.
end
['The estimation of the integral is ', num2str(r)]  %%printing the result.
