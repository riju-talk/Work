fileobj = open("read.txt","r")
filelist = fileobj.readlines()

str1 = ""

for a in filelist:
    str1 = str1 + a
str2=str1.split()

for b in str2:
    print(b,"#",end=" ")
