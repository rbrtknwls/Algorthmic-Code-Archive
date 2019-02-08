D = int(input())

Hours = int(D / 60)
Hourn = Hours
Min = D % 60
Multi = 0
if Hourn > 12:
    Multi = int(Hourn / 12)
    Hours = 0
    if Hourn % 12 != 0:
        Rem = D - (Multi * 60 * 12)
        Hours = int(Rem / 60)
        if Rem % 60 != 0:
            Min = Rem - (Hours * 60)

# Hours
List = [1, 5, 5, 4, 4, 3, 3, 2, 2, 1, 0, 1]
Sum_H = 0
Final = 0
if Hours > 0:
    for i in range(Hours):
        Sum_H += int(List[i])
        Final = i

# Multi
Tota_Np = 0
for i in List:
    Tota_Np += i
Sum_M = Tota_Np * Multi

# Min
Poss = [12, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]
if Final == 11:
    Final = -1
if Hours == 0:
    Final = -1
Hour_M = str(Poss[Final + 1])
Min_S = 0
Sum_K = 0
if Min > 0:
    for i in range(Min):
        Min_S += 1
        if Min_S < 10:
            Min_M = "0" + str(Min_S)
        else:
            Min_M = str(Min_S)
        if int(Hour_M) < 10:
            if int(Hour_M[0]) - int(Min_M[0]) == int(Min_M[0]) - int(Min_M[1]):
                Sum_K += 1
        else:
            if int(Hour_M[0]) - int(Hour_M[1]) == int(Hour_M[1]) - int(Min_M[0]) == int(Min_M[0]) - int(Min_M[1]):
                Sum_K += 1