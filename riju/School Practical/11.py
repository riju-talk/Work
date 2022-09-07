import pickle
emp={}
list1=[]
a=0
while 1<=2:
    char=input("Enter roll no. or press enter to exit\n")
    if char =="":
        break
    else:
        name=input("Enter the name\n")
    a += 1
    emp[char]=name
with open("pickletest.pickle", "wb") as f:
    pickle.dump(emp, f)
store = []
with open("pickletest.pickle", "rb") as f:
    store = pickle.load(f)
stud=input("Enter the the roll no of the student\n")
if stud in store:
    print("The student is",store[stud])
else:
    print("No such student exists")

