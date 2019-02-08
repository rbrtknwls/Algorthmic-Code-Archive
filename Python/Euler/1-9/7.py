num = 14
primelist = [2,3,5,7,11,13]
while 10001 != len(primelist):
    x = True
    for i in primelist:
        if num%i == 0:
            x = False
    if x:
        primelist.append(num)
    num += 1

