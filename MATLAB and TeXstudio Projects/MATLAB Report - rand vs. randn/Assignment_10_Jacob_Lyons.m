clear all
clc

x = rand(1,10000); %%uniformly distributed
part = [0.1:1/10:1];    %%part is short for partition
y = zeros(10,1);    %%this is a array for counting


for i=1:length(part)-1
    
    y(i) = sum(part(i) <= x & x < part(i+1));
    
end

c = linspace(1,500,length(part));
scatter(part, y, 25, c, 'filled');

title('Partition vs. Numbers of Entries w/ rand')  %%title at top
xlabel('partitions')     %%label x axis
ylabel('partition frequency')     %%label y axis

%%-------------------------------------------------------%%
                        %%PART 2%%
%%-------------------------------------------------------%%

% x2 = randn(1,10000); %%uniformly distributed
% part2 = [-3:6/25:3, inf]; %%part is short for partition
% y2 = zeros(27,1);   %%this is a array for counting
% 
% y2(1) = sum(x2 < -3);
% y2(27) = sum(x2 >  3);
% 
% for i=1:length(part2)-1
%     
%     y2(i+1) = sum(part2(i) <= x2 & x2 < part2(i+1));
%     
% end
% 
% c = linspace(1,500,length(part2));
% scatter(part2, y2, 25, c, 'filled');
% 
% title('Partition vs. Numbers of Entries w/ randn')  %%title at top
% xlabel('partitions')     %%label x axis
% ylabel('partition frequency')     %%label y axis
% 
