Word = input()
List = []
z = 0
y = 0
largest = -1
for i in range(0, len(Word)):
    List.append(Word[i])
for i in range (0,len(List)):
    for a in range(i, len(List)-1):
            z = List[i:a+2]
            y = z[:]
            y.reverse()
            if y == z:
                if len(z) > largest:
                    largest = len(z)
print(largest)