Let = ['I', 'O', 'S', 'H', "Z", 'X', 'N']

word = list(input())
x = True
for let in word:
    if let not in Let:
        x = False


if x == True:
    print("YES")
else:
    print("NO")