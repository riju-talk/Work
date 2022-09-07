obj1=open("file1.txt",'a')
obj2=open("file2.txt",'a')
obj3=open("file3.txt",'a')
a=0
while 1<=2:
    char=input("Enter a character or press enter to exit\n")
    a += 1
    if char.islower() == True:
        obj1.write(char)
    elif char.isupper() == True:
        obj2.write(char)
    elif char == "":
        break
    else:
        obj3.write(char)

obj1.close()
obj2.close()
obj3.close()