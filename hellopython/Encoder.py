import functions
def bin(Char):
    List1=Char.split()
    emp=[]
    for a in List1:
        for x in range(0,len(a)):
            emp.append (ord(str(a[x])))
        emp.append (ord(" "))
    emp2=""
    for a in emp:
        emp2= emp2 + str(functions.binary(int(a))) + " "
    news=""
    for a in range(0,len(emp2)):
        if emp2[a]=="1":
            news= news + "-"
        elif emp2[a]=="0":
            news= news +"."
        else:
            news = news +" "
    return news
