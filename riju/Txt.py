d = open("input.txt","r")
pystr = "Python"
g=[]
c=d.read()
rd = list((c).split())
for a in rd:
    if pystr.lower()==a.lower():
        g.append(a)
countpy=len(g)
d_3 =c.split("#")
d_3.pop(0)
print("No. Of ""python""s are: ",countpy)
print("No. Line of commnets are: ",len(d_3)+1)