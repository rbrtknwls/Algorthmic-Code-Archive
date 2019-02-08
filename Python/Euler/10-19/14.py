def seq(n):
    if n == 1:
        return(1)
    else:
        if n%2 == 0:
            return(1+seq(n/2))
        else:
            return(1+seq(3*n+1))
            
largest = 0
store = 0
for i in range(500000,1000000):
    if seq(i) > largest:
        largest = seq(i)
        store = i;
print(store)