import math
n = 5
Sum = 5
while n < 2000000:
    x = True
    for i in range(2,int(math.sqrt(n)+1)):
        if n%i == 0:
            x = False
            break
    if x:
        Sum += n
    n+= 2
print(Sum)