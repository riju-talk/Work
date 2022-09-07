h= open("write.txt","w")
def sq(n):
    return(n**2)

for a in range(0,11):
    c=str(sq(a))

    
    h.writelines(c)
    h.writelines("\n")
h.close()
