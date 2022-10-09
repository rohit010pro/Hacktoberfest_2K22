import pyqrcode
from tkinter import *
import tkinter.ttk as ttk
from PIL import Image,ImageTk

mainScreen = Tk()
mainScreen.title("QR CODE GENERATOR")
mainScreen.config(background='blue')

def generate():
    text = entry1.get()
    qr = pyqrcode.create(text)
    file_name = "My QR-Code"
    save_path = r".\ "
    name = save_path + file_name + '.png'
    qr.png(name, scale=10)
    image = Image.open(name)
    image = image.resize((400,400), Image.ANTIALIAS)
    image = ImageTk.PhotoImage(image)
    mainScreen.imagelabel.config(image=image)
    mainScreen.imagelabel.photo = image

text = ttk.Label(mainScreen, text="Enter text or link: ")
text.grid(row=0, column=0, padx=3, pady=3)

entry1 = ttk.Entry(mainScreen, width=40)
entry1.grid(row=0, column=1, padx=3, pady=3)

button = ttk.Button(mainScreen, text="Generate", command=generate)
button.grid(row=0, column=2, padx=3, pady=3)

show_qr = ttk.Label(mainScreen, text="QR Code: ")
show_qr.grid(row=1, column=0, padx=3, pady=3)

mainScreen.imagelabel = ttk.Label(mainScreen, background='blue')
mainScreen.imagelabel.grid(row=2, column=0, padx=3, pady=3, columnspan=3)

mainScreen.mainloop()