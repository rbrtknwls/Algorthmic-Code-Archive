counter = 0
for i in range(6):
    x = input()
    if x == "W":
        counter += 1

if (counter >= 5):
    print(1)
elif (counter >= 3):
    print(2)
elif (counter >= 1):
    print(3)
else:
    print(-1)