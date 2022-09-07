c=int(input("Please specify the no. of terms\n"))

n = [0,1]
f = 0

while(f<len(n)):
    
    g = n[-1]+n[-2]
    n.append(g)
    
    f=f+1
    

    if (len(n)>=c):
        break
print("\n")

for x in range (c):
    print(n[x],end=" ")

