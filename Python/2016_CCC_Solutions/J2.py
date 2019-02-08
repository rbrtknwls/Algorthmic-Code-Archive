Square = []
for i in range(4):
    Square.append(input().split(" "))

Sum = int(Square[0][0]) + int(Square[1][0]) + int(Square[2][0]) + int(Square[3][0])
Stri = "magic"
for x in range(4):
    loc = 0
    loc1 = 0
    for y in range(4):
        loc += int(Square[y][x])
        loc1 += int(Square[x][y])
    if (loc != Sum or loc1 != Sum):
        Stri = "not magic"

print(Stri)