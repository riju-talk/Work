import functions
def rel(char1):
    char=""
    for a in range(0,len(char1)):
        if char1[a]=="-":
            char= char + "1"
        elif char1[a]==".":
            char= char + "0"
        else:
            char= char +" "
    d = char.split()
    e = []
    for x in d:
        e.append(functions.antibinary(int(x)))
    news=""
    for x in e:
        news= news + chr(int(x))
    return news