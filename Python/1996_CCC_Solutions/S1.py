import math
for i in range(0,int(input())):
    num = int(input())
    su = 0
    for x in range(1, int(num/2)+1):
        if (num % x == 0):
            su += x;
    if num > su:
        print(str(num) + " is a deficient number.")
    elif num == su:
        print(str(num) + " is a perfect number.")
    else:
        print(str(num) + " is an abundant number.")
        