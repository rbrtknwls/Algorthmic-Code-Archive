Start = int(input())
Amount = int(input())
total = 0

total += Start
for i in range(Amount):
    Start = int(str(Start)+'0')
    total += Start
print(total)