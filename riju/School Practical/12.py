import pickle
emp={}
a=0
while 1<=2:
    char=input("Enter roll no. or press enter to exit\n")
    if char =="":
        break
    else:
        list1=[]
        name=input("Enter the name\n")
        marks=input("Enter the marks\n")
        list1.append(name)
        list1.append(marks)
    a += 1
    emp[char]=list1
with open("pickletest.pickle", "wb") as f:
    pickle.dump(emp, f)
store = []
with open("pickletest.pickle", "rb") as f:
    store = pickle.load(f)

stud=input("Enter the the roll no of the student\n")
mark=input("Enter the new marks\n")
d = store[stud]
d[-1] = mark
print("The marks have been updated successfully")