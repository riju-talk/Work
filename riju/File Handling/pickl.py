import pickle

f= "Make Your Own Future.Make your own past"

g = open("pypick.txt","wb")
pickle.dump(f,g)
g.close



