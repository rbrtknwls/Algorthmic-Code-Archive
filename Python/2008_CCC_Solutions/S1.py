City = ""
Temp = 1000000000
Input = ['a','b']
while Input[0] != "Waterloo":
    Input = input().split()
    if int(Input[1]) < int(Temp):
        City = str(Input[0])
        Temp = int(Input[1])
print(City)