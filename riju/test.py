n=int(input("Specify the range\n"))
for i in range(n):
    for j in range(i+1):
        print("*",end="")
    print()