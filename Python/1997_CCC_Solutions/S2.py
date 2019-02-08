number = int(input())


def primesolve(num):
    List = []
    for i in range(1, int((num) / 2)):
        if num % i == 0 and [int(num / i), i] not in List:
            List.append([i, int(num / i)])
    return List


for count in range(number):
    checker = True
    number = int(input())
    List = primesolve(number)

    for i in range(len(List)):
        for z in range(len(List)):
            if abs(List[i][0] - List[i][1]) == List[z][0] + List[z][1]:
                checker = False

    if checker == False:
        print(number, "is nasty")
    else:
        print(number, "is not nasty")