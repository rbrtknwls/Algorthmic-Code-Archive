Word = input()
Alpahbet = "abcdefghijklmnopqrstuvwxyz"
Rule =        "aaeeeiiiiooooouuuuuuuu"
Constantent = "bcdfghjklmnpqrstvwxyzz"
New_Word = ""
for letter in Word:
    if letter in Constantent:
        New_Word += letter + Rule[Constantent.index(letter)] + Constantent[Constantent.index(letter)+1]
    else:
        New_Word += letter
print (New_Word)