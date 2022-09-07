import empty4
char= str(input("Enter the coded Phrase\n"))
d = char.split()
e = []
for x in d:
    e.append(empty4.antibinary(int(x)))
for x in e:
    print(chr(int(x)),end="")