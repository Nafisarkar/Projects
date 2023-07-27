import tkinter as tk
from tkinter import ttk


def convert():
    output_var.set(str(entryInt.get()*1.6))


window = tk.Tk()
window.geometry("300x150")

title_table = ttk.Label(window, text="Miles to kilometers", font="50")
title_table.pack()

input_frame = ttk.Frame(master=window)
entryInt = tk.IntVar()
entry = ttk.Entry(master=input_frame, textvariable=entryInt)

button = ttk.Button(master=input_frame, text="Convert", command=convert)
entry.pack(side='left', padx=10)
button.pack(side='left')
input_frame.pack(pady=10)


output_var = tk.StringVar()
output_label = ttk.Label(master=window, text='output', textvariable=output_var)
output_label.pack(padx=10)

window.mainloop()
