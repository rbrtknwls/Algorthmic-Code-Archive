Humidity = int(input())
Max_Hours = int(input())
Check = True
for t in range(1, Max_Hours + 1):
    A = -6 * t * t * t * t + Humidity * t * t * t + 2 * t * t + t
    if A <= 0:
        print("The balloon first touches ground at hour:")
        print(t)
        Check = False
        break  # good use of break statement
if Check == True:
    print("The balloon does not touch ground in the given time.")
