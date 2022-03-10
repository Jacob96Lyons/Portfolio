% Christian Rouhana
% 11693917

clear;
n = input("Please enter a starting value ");
m = double(n);
i = 0;
past_vals = [];
step = [];
while 1
    if i >= 100000
        disp("It takes more than 100,000 steps to test the conjecture");
        break;
    end
    if ismember(m, past_vals)
        fprintf("Collatz conjecture is false and %d is the counter example!", n);
        break;
    end
    if m == 1
        fprintf("Collatz conjecture is true for %d and it takes %d steps to reach 1.", n, i);
        figure
        plot(step, past_vals)
        title('Line plot of Step(i) vs. Current Val(m)')
        xlabel('Step(i)')
        ylabel('Current Step(m)')
        break;
    end
    past_vals(i+1) = m;
    step(i+1) = i;
    if rem(m, 2) == 0
        m = m/2;
    else
        m = m * 3 + 1;
    end
    i = i + 1;
end