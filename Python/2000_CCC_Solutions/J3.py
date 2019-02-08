quarters = int(input())
fmplays = int(input())
smplays = int(input())
tmplays = int(input())
machine = 1
tplays = 0

while quarters >= 1:
  #print("You have", quarters)
  if machine == 1:
    fmplays += 1
    #print("FMPlays", fmplays)
    if fmplays == 35:
      quarters += 30
      fmplays = 0
    machine = 2
  elif machine == 2:
    smplays += 1
    #print("SMPlays", smplays)
    if smplays == 100:
      quarters += 60
      smplays = 0
    machine = 3
  elif machine == 3:
    tmplays += 1
    #print("TMPlays", tmplays)
    if tmplays == 10:
      quarters += 9
      tmplays = 0
    machine = 1
  quarters -= 1
  tplays += 1

print("Martha plays", tplays, "times before going broke.")
