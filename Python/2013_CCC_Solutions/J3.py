Non = 0
Current = int(input())
while Non == 0:
    Current += 1
    b = list(map(int, str(Current)))
    a = list(set(b))
    if len(a) == len(b):
        Non = Current
print(Non)