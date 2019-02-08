start = int(input())
end = int(input())
curx = 9
cury = 9
total = 0
y_total = 0
count_x = 0
count_y = 0
Array = [[0] * 20 for i in range(20)]


def disp(x):
    for i in range(len(x)):
        print(x[i])


def space(x):
    for i in range(0, x):
        print("")


def create():
    global count_x
    for y in range(len(Array)):
        total = 0;
        for x in range(len(Array[y])):
            total += Array[y][x]
        if total != 0:
            count_x += 1


def fix():
    count = 0
    for y in range(len(Array)):
        total = 0;
        for x in range(len(Array[y])):
            total += Array[y][x]
        if total != 0:
            f_Array[count] = Array[y]
            count += 1


def final():
    global count_y
    for i in range(len(f_Array)):
        for x in range(len(f_Array[i])):
            y_total = 0
            for y in range(len(f_Array)):
                y_total += f_Array[y][x]
            if y_total != 0:
                count_y += 1

        break


def sup():
    global final_Array
    global f_Array
    for y in range(len(f_Array)):
        xcount = 0
        for x in range(len(f_Array[y])):
            if (f_Array[y][x] != 0):
                final_Array[y][xcount] = f_Array[y][x]
                xcount += 1


def form():
    global final_Array
    for y in range(len(final_Array)):
        for x in range(len(final_Array[y])):
            if final_Array[y][x] < 10:
                final_Array[y][x] = ' ' + final_Array[y][x]


Array[cury][curx] = start
while start < end:
    start += 1;
    # Check above
    if Array[cury - 1][curx] != 0 and Array[cury][curx + 1] == 0:
        curx += 1
    # check left and down
    elif Array[cury][curx - 1] == 0 and Array[cury + 1][curx] != 0:
        curx -= 1
    # check left
    elif Array[cury][curx - 1] != 0:
        cury -= 1
    else:
        cury += 1

    Array[cury][curx] = start

create();
f_Array = [[0] * 20 for i in range(count_x)]
fix()
final()
final_Array = [[0] * count_y for i in range(count_x)]
sup()
form;

for y in range(len(final_Array)):
    for x in range(len(final_Array[y])):
        if final_Array[y][x] != 0:
            if len(str(final_Array[y][x])) == 2:
                print(final_Array[y][x], end=' ')
            else:
                print(' ' + str(final_Array[y][x]), end=' ')

        else:
            print('  ', end=' ')
    print()