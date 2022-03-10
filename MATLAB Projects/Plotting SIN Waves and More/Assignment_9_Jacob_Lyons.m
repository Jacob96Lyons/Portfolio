clear all
clc

% x = linspace(0,2*pi);
% y1 = cos(x);  %%plot the cordinates 
% y2 = sin(x);  %%plot the cordinates 
% y3 = tan(x);  %%plot the cordinates 
% 
% plot(x, y1,'r--', x, y2,'b-', x, y3,'g:')  %%plot the cordinates
% legend('cos(x)','sin(x)','tan(x)')
% 
% hold on

x = linspace(0,3*pi,100);
y = sin(x);
sz = 25;
c = linspace(1,10,length(x));
scatter(x,y,sz,c,'filled')

title('Spectrum of Sin!')  %%title at top
legend({'sin wave'},'Location','southeast')     %%legend, add names of lines
xlabel('x axis')     %%label x axis
ylabel('y axis')     %%label y axis

