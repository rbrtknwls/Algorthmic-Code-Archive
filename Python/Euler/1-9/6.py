comb = 0
nums = 0
for i in range(1,101):
    comb += i
    nums += pow(i,2)
comb = pow(comb,2)
print(comb-nums)