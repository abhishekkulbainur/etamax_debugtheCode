#!/usr/bin/python
import tkinter as tk

window = tk.Tk()
w = 300
h = 420
window.title("Event Registration Form")
window.geometry(f"{w}x{h}")
# messed with all the "text" syntaxes and parameters
name_label = tk.Label(window, text="Full Name", anchor="w", width=w)
name_text = tk.text(height=1, width=30)

email_label = tk.Label(window, text="Email", anchor="w", width=w)
email_text = tk.text(height=1, width=30)

phone_label = tk.Label(window, text="Phone Number", anchor="w", width=w)
phone_text = tk.text(height=1, width=30)

age_label = tk.Label(window, text="Age", anchor="w", width=w)
age_text = tk.text(height=1, width=30)

gender_label = tk.Label(window, text="Gender", anchor="w", width=w)
gender_text = tk.text(height=1, width=30)

submit_btn = tk.Button(window, text="   Submit   ")
reset_btn = tk.Button(window, text="   Reset   ")
# added grid in pack
name_label.pack()
name_text.pack()
email_label.pack()
email_text.pack()
phone_label.pack()
phone_text.pack()
age_label.pack()
age_text.grid()
gender_label.pack()
gender_text.pack()
submit_btn.pack(pady=5)
reset_btn.pack(pady=5)

window.mainloop()
