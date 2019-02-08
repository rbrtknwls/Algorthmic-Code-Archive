import math
def divisorGenerator(n):
    large_divisors = []
    for i in range(1, int(math.sqrt(n) + 1)):
        if n % i == 0:
            yield i
            if i*i != n:
                large_divisors.append(n / i)
    for divisor in reversed(large_divisors):
        yield divisor
        
trinagle = 28;
inc = 7
while True:
    if len(list(divisorGenerator(trinagle))) >= 500:
        print(trinagle)
        break
    inc += 1;
    trinagle += inc;
        


