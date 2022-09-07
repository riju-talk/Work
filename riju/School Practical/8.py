list1=[]
a=0
while 1<=2:
    val1 = (input("Enter an element to the queue or press enter to continue\n"))
    a += 1
    if str(val1) == "":
        break
    else:
        list1.append(val1)
queue = list(reversed(list1))
a=0
while 1<=2:
    print("Here is your resultant queue",queue)
    print("Press 1 for Enqueue")
    print("Press 2 for Dequeue")
    print("Press X for to exit")
    val2 = str(input("Enter your value here: "))
    a += 1
    if val2 == "1":
        value = input("Enter your value\n")
        queue.insert(0,value)
    elif val2 =="2":
        queue.pop()
    elif val2.lower() =="x":
        break
    else:
        print("Enter a Valid Input")
