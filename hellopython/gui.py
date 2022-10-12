from numpy import insert
import Encoder
import Decoder
from tkinter import *

mainstring=""

root=Tk()
def Encode():
    string=entry.get()
    estring=Encoder.bin(string)
    mainstring=""
    mainstring += estring

def Decode():
    string=entry.get()
    dstring=Decoder.rel(string)
    mainstring=""
    mainstring += dstring

def Exit():
    root.destroy()
mylabel=Label(root, text="The is the Algorithm to secrecy")   
mylabel.pack()


#button controls
encode = Button(root, text="Encode", padx=30, pady=15, command=Encode)
decode = Button(root, text="Decode", padx=30, pady=15, command=Decode)
exitb = Button(root, text="Exit", padx=30, pady=15, command=Exit)



#these are the dimensions of the window
root.minsize(600,600)
root.maxsize(600,600)
#------------------------------------------------

#these are test controls
entry=Entry(root,width=70)
entry.pack()
entry.insert(0, "")
#-------------------------------------------------


#this is the text section of the document
textbox=Text(root, height = 20, width = 50)
textbox.insert(INSERT, mainstring)
textbox.insert(INSERT, "\n")
textbox.pack()
#-------------------------------------------------
encode.pack()
decode.pack()
exitb.pack()
root.mainloop()
