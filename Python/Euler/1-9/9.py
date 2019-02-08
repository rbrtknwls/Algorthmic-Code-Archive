for a in range(1,1000):
    for b in range(a,0,-1):
        c = pow(pow(a,2) + pow(b,2),0.5)
        if c == int(c):
            if a+b+c == 1000:
                print(a*b*c)
            