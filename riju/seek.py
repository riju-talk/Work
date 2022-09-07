obj = open("title.txt","rt") 

obj.seek(20)
print(obj.readline())
obj.seek(0)
print(obj.readline())
obj.seek(0)
print(obj.readline())

obj.close()