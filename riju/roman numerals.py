r=['I','V','X','L','C']
e=[]

n = int(input("Please Enter a NO. between 0 and 100\n"))
m = n//10

if(n>=100):
    print("This no is bigger than 100")
else:




    if(m>=4 and m<=8):
        e.append(r[3])

        if(m==4):
            e.insert(0,r[2])
   
        else:
            pass


    elif(m>=9 and m<=10):
        e.append(r[-1])
        if(m==9):
            e.insert(0,r[2])
        else:
            pass
    else:
        pass



    if(n>=10):
        f = n-(m*10)
    else:
        f = n

    if(m>=0 and m<=3):
        for a in range (m):
            e.append(r[2])

    elif(m>=5 and m<=8):
        for a in range (m-5):
            e.append(r[2])

    else:
        pass

    if(f>=5 and f<=8):
        e.append(r[1])
    else:
        pass



    if(f!=4 and f!=9):
    
        if(f<=3):
            for b in range (f):
                e.append(r[0])
        elif(f>=5 and f<=8):
            for b in range (f-5):
                e.append(r[0])
        else:
            pass
    else:
        e.append(r[0])
    
        if(f==4):
            e.append(r[1])
        elif(f==9):
            e.append(r[2])
        else:
            pass
    
    print("\nThe roman form of your no would be")        
    
    for c in range (len(e)):
        print(e[c],end="")



