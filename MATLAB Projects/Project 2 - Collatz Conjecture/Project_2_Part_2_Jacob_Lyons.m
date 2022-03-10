clear all
clc

y = []; %%array for y axis
x = []; %%array for x axis
i=0;    %%counter
steps = 0;  %%current number of steps
prompt = 'Enter number ';   %%enter input
k = input(prompt);  %%store input in variable
og = k;     %%copy original input for final statement
m = 0;      %%number for testing
save = 0;   %%save highest m yet
label = ['Graph of ', num2str(og)];     %%label for legend using the original value
result = 0;     %%variable that acts as a key to the correct response 

while k >= steps
    
    save = save + 1;
    
    if save > 100000
        result = 1;
        break
    else
        m = save;
        steps = 0;
    end
    
while m > 1
    
    iseven = rem(m, 2) == 0;
    
    if iseven == 1
        steps = steps + 1;
        m = m/2;
    else 
        steps = steps + 1;
        m = (m*3) + 1;        
    end

    if steps > 100000
        result = 1;
        break
    end
end

    x(i+1) = save;
    y(i+1) = steps;
    i = i + 1;
    
    if steps >= k
        result = 0;
        break
    end
    
end

if result == 1
    ['All the starting values up to 100,000 take less than ', num2str(og),' steps to reach 1.']
else
    [num2str(save),' is the first starting value that takes at least ', num2str(og),' steps to reach 1.']
    bar(x,y, 'r')
    title('Collatz conjecture')  %%title at top
    subtitle('Threshold vs. Max Number of Steps')  %%subtitle at top
    legend({label},'Location','northwest')     %%legend, add names of lines
    xlabel('Number Being Tested')     %%label x axis
    ylabel('Number of Steps')     %%label y axis
    yl = yline(k,'-','Threshold','DisplayName','Input of K');
    yl.LabelHorizontalAlignment = 'center';
end
