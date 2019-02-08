List = input()
Rout = []
while List != "SCHOOL":
    Rout.append(List)
    List = input()

Rout.reverse()
Rout.append("HOME")


while len(Rout) > 2:
    if Rout[0] == "R":
        print("Turn LEFT onto", Rout[1], "street.")
    else:
        print("Turn RIGHT onto", Rout[1], "street.")
    Rout.pop(0)
    Rout.pop(0)

if Rout[0] == "R":
    print("Turn LEFT into your HOME.")
else:
    print("Turn RIGHT into your HOME.")
