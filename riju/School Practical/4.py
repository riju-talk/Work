def tup(tuple1):
    odd=[]
    even=[]
    for x in range(0,len(tuple1)):
        if int(tuple1[x])%2==0:
            even.append(tuple1[x])
        else:
            odd.append(tuple1[x])
    print("The number of even numbers are",len(even))
    print("The number of odd numbers are",len(odd))
emp=[]
a = 0
while 2>=1:
    a += 1
    f =input("Enter a number or press enter to terminate ")
    if str(f) == "":
        break
    else:
        emp.append(f)
emp1=tuple(emp)
tup(emp1)