def eve(list1):
    for a in range(0,len(list1)):
        if int(list1[a])%2==0:
            list1[a]=str(int(list1[a])/2)
        else:
            list1[a]=str(int(list1[a])*2)
    print(list1)
emp=[]
a = 0
while 2>=1:
    a += 1
    f =input("Enter a number or press enter to terminate ")
    if str(f) == "":
        break
    else:
        emp.append(f)
print("The resultant list is hereby ")
print(eve(emp))