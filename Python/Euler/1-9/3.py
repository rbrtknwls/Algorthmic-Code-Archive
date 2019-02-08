import math
num = 600851475143;
largerst =0
for i in range(3, int(math.sqrt(num)),2):
    if num%i == 0:
        largest=i
        num /= i
print(largest)
