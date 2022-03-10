clear all
clc

y = []; %%array for y axis
x = []; %%array for x axis
i=0;    %%counter
steps = 0;  %%current number of steps
prompt = 'Enter number ';   %%enter input
m = input(prompt);  %%store input in variable
og = m;     %%copy original input for final statement
label = ['Graph of ', num2str(og)];     %%label for legend using the original value
result = 0;     %%variable that acts as a key to the correct response 

while m > 1
    
    if ismember(m, y)
        result = 2;
        break
    end
    
    x(i+1) = i;
    y(i+1) = m;
    i = i + 1;
        
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
 
if m == 0
    result = 4;
elseif m > 1
    x(i) = i;
    y(i) = m;
end
    
if result == 1
    ['It takes more than 100,000 steps to test the conjecture.']
elseif result == 2
    ['Collatz conjecture is false and ', num2str(og),' is the counter example!'];
elseif result == 0
    ['Collatz conjecture is true for ', num2str(og),' and it takes ',num2str(steps),' many steps to reach 1.']
    plot(x,y)
    title('Collatz conjecture')  %%title at top
    subtitle('Number of Steps vs. Current Number')  %%subtitle at top
    legend(label)   %%legend, add names of lines
    xlabel('Number of Steps')     %%label x axis
    ylabel('Current Value')     %%label y axis
else
    ['error']
end
