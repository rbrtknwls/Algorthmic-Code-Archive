N = (int(input()))
English = 0
French = 0
for i in range(0, N):
    Letter = input()
    English += Letter.count("t")
    English += Letter.count("T")
    French += Letter.count("s")
    French += Letter.count("S")

if English > French:
    print("English")
elif English <= French:
    print("French")