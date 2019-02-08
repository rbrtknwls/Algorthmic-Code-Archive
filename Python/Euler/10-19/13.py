f = open("13.txt","r")
Sum = 0
for i in range(0,100):
    n = (f.readline()).split(" ")
    for numb in n:
        Sum += int(numb)
print(Sum)