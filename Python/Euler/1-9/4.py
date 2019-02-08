x = []
for i in range(999,900,-1):
    for y in range(999,900,-1):
        if i*y == int(str(i*y)[::-1]):
            x.append(i*y)
x.sort()
print(x)
    