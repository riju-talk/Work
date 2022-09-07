


obj1=open("file1.txt","r")
list1=obj1.readlines()
obj1.close

obj1=open("file1.txt","w")
obj2=open("file2.txt","w")

for x in list1:
    if "a"in x.lower():
        obj2.write(x)
    else:
        obj1.write(x)

obj1.close
obj2.close




