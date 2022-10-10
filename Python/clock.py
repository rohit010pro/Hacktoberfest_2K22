import time
from tkinter import *



def clock():
    curr_time=time.strftime("%H:%M:%S")
    label.config(text=curr_time)
    label.after(200,clock)


root=Tk()

root.geometry("359x150+0+0")

root.configure(background="black")

root.resizable(0,0)

root.overrideredirect(1)


label = Label(root,font=("ds-DIGITAL",50,"bold"),bg='black',fg='white',bd=50)

label.grid(row=0,column=1)

clock()

print("Done")

root.mainloop()
