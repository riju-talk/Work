emp = str(input("Enter a string... \n"))

def vow(str1):
    lst=["a","e","o","u","i"]
    str2=str1.lower()
    emp2=[]
    for a in range(0,len(str2)):
        for x in lst:
            if str1[a] == x:
                emp2.append(str1[a])
            else:
                pass
    print("The number of vowels are",len(emp2))

vow(emp)
