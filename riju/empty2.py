import empty4

Char= str(input("Enter Phrase\n"))
List1=Char.split()
emp=[]
for a in List1:
    for x in range(0,len(a)):
        emp.append (ord(str(a[x])))
    emp.append (ord(" "))
emp2=""
for a in emp:
    emp2= emp2 + str(empty4.binary(int(a))) + " "
print(emp2)
#empty4.binary(emp2)

