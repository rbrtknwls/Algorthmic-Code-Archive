def fib (i):
    if i == 1 or i ==2:
        return(1)
    else:
        return(fib(i-1) + fib(i-2))
x = True;
n = 0;
Sum = 0
while x:
    n+= 1
    y = fib(n)
    if (y < 4000000):
        if (y%2 == 0):
            Sum += y
    else:
        x = False
print(Sum)
    
        