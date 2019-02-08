Point_a = int(input())
Point_b = int(input())


if Point_a > 0 and Point_b > 0:
    print(1)
elif Point_a > 0 and Point_b < 0:
    print(4)
if Point_a < 0 and Point_b > 0:
    print(2)
elif Point_a < 0 and Point_b < 0:
    print(3)
