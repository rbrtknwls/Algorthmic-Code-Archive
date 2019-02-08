# Please for the love of god dont do it like this.....


Time = input()
z = []
c = ' '
if Time[0] == '0':
    Hour = Time[1]
else:
    Hour = Time[0:2]
counter = 240
Min = Time[3:5]
Min_s = Min
Hour_s = Hour
Min = int(Min)
Hour = int(Hour)
while counter >= 0:
    if Hour >= 7 and Hour < 10:
        Min += 1
        counter -= 1
        if Min >= 60:
            Hour += 1
            Min = 0
        if Hour == 25:
            Hour = 1
    elif Hour >= 15 and Hour < 19:
        Min += 1
        counter -= 1
        if Min >= 60:
            Hour += 1
            Min = 0
        if Hour == 25:
            Hour = 1
    else:
        Min += 1
        counter -= 2
        if Min >= 60:
            Hour += 1
            Min = 0
        if Hour == 25:
            Hour = 1
Min -= 1
if Min < 10 and Hour < 10:
    print ('0'+str(Hour) + ':' + '0'+str(Min))
elif Min == 0 and Hour == 24:
    print("00:00")
elif Hour <10:
    print ('0'+str(Hour) + ':' + str(Min))
elif Min < 10:
    print (str(Hour) + ':' + '0'+str(Min))
else:
    print (str(Hour) + ':' +str(Min))
