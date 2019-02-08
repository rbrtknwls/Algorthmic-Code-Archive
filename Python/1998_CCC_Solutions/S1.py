Length = int(input())
for i in range(Length):
    Sentence = input()
    New = []
    Sentence = Sentence.split(" ")
    for i in range(len(Sentence)):
        if len(Sentence[i]) == 4:
            New.append("****")
        else:
            New.append(Sentence[i])

    print(" ".join(New))