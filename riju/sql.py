import pickle

with open("manage.txt","wb") as f:
    pickle.dump("A killer walks through the light and looks for the murderer who looks for him in the dark",f)
f.close
with open("manage.txt","rb") as f:
    pk = pickle.load(f)
f.close
print(pk)