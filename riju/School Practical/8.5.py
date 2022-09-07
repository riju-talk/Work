str1=str(input("Enter a string\n"))
fnd=str(input("Enter a word\n"))


emp=[]
def count(str1,fnd):
    list1=(str1.lower()).split()

    for x in  range(0, len(list1)):
        if list1[x]==fnd.lower():
            emp.append(list1[x])
    print("THe number of occurences is =",len(emp))

count(str1,fnd)


