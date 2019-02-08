f = open('11.txt', 'r')
List = [[0 for x in range(20)] for y in range(20)] 
for i in range(0,20):
    List[i] = (f.readline()).split(" ")
    if i != 19:
        List[i][19] = int(List[i][19][:-1])
        
largest = 0;
for y in range(20):
    for x in range(16):
        curr = int(List[y][x]) * int(List[y][x+1]) * int(List[y][x+2]) * int(List[y][x+3])
        if curr > largest:
            largest = curr
        curr = int(List[x][y]) * int(List[x+1][y]) * int(List[x+2][y]) * int(List[x+3][y])
        if curr > largest:
            largest = curr

for y in range(16):
    for x in range(16):
        curr = int(List[y][x]) * int(List[y+1][x+1]) * int(List[y+2][x+2]) * int(List[y+3][x+3])
        if curr > largest:
            largest = curr
            
for y in range(3,20):
    for x in range(16):
        curr = int(List[y][x]) * int(List[y-1][x+1]) * int(List[y-2][x+2]) * int(List[y-3][x+3])
        if curr > largest:
            largest = curr
            
print(largest)
            