Total = input()
Sizes = (input()).split()
Amounts = [0]*2001
Distances = [0]*4001
for i in Sizes:
    Amounts[int(i)] += 1
for i in range(len(Amounts)):
    if Amounts[i] != 0:
        Distances[i*2] += Amounts[i]//2
        for x in range(i+1,len(Amounts)):
            if Amounts[x] != 0:
                Distances[x+i] += min([Amounts[i],Amounts[x]])

count = 1
largest = 0
for i in Distances:
    if i > largest:
        count = 1
        largest = i
    elif i == largest:
        count += 1

print(largest, count)