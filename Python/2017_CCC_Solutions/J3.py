Start = input().split()
End = input().split()
Gas = int(input())

Smallest = abs(int(Start[0]) - int(End[0])) + abs(int(Start[1])-int(End[1]))
if abs(Smallest - Gas) % 2 == 0 and Smallest <= Gas:
    print("Y")
else:
    print("N")