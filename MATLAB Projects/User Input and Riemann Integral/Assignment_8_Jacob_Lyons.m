clear all
clc
n = 10; %%starting number of partition.
r = 0; %%this is the estimation.
syms x %%x is a symbol.
f(x) = exp(x); %%set function.
v = int(f,0,1); %%integral of exp(x).

while v-r > 10^(-5) %%starting a while loop.
n = n+1; %%add 1 to current number or partitions 
x=[0:1/n:1]
r = 0; %%resetting r before Riemann integral

for i=1:length(x)-1    %%start of a for loop.
r = r + exp((x(i+1)+x(i))/2) * (x(i+1)-x(i));     %%current code
end
% % i   %%printing current result.
% % r   %%printing current result.
% % n   %%printing current result.

% % remove %% from lines 17-19 to print the current number of partitions and current error while
% % the "while loop" is still going

end
% ['The estimation of the integral is ', num2str(r)]  %%printing the result.
['Total number of partitions is ', num2str(n)] %%printing the end result.