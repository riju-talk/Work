emp={}
a = 0
while 2>=1:
    a += 1
    f =input("Enter a key or press enter to terminate: ")
    if str(f) == "":
        break
    else:
        g =input("Enter a value: ")
        emp[f]=g
print("\noriginal dictionary...\n",emp)

def change(dict1):
    d = input("Enter The key You want to edit: ")
    y = input("Enter the new value: ")
    dict1[d]= y
    print("\nThe Updated Dictionary is...\n",dict1)
print(change(emp))
