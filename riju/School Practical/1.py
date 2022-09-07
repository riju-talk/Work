def sumrec(list1,num):
    if num ==  0:
        return 0
    else:
        return int(list1[num-1])+ sumrec(list1,num-1)

emp=[]

a = 0
while 2>=1:
    a += 1
    f =input("Enter a number or press enter to terminate ")
    if str(f) == "":
        break
    else:
        emp.append(f)

print("The sum of all entities is = ",sumrec(emp,len(emp)))


