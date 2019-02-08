f = open('8.txt', 'r')
List = []
for i in range(0,20):
    for digit in f.readline():
        if digit != '\n':
            List.append(int(digit))
largest = 0
for i in range(0,988):
    Sum = 1
    for n in range(0,13):
        Sum *= List[i+n]
    if largest < Sum:
        largest = Sum
print(largest)
