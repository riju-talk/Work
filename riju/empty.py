import csv
sort=['Salma','1997','08-07-2021','yes']


with open("fil.csv","r") as obj:
    clan = csv.reader(obj)
    for a in clan:
      print(a)    
    
    
    with open("file.csv","w") as obj1:
        squad = csv.writer(obj1)
        squad.writerow(sort)
