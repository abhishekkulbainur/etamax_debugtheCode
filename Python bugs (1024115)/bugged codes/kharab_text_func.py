import tkinter as tk

def show_length():
    text = entry.get()
    length = 0
    for i in range(len(text)-1):      # LOGIC BUG: ignores last character
        length += 1
    result.config(text="Length: " + length)   # SYNTAX/RUNTIME BUG: str + int

def reverse_text():
    text = entry.get()
    rev = ""
    for i in range(len(text)):
        rev += text[i]                # LOGIC BUG: does not reverse
    result.config(text="Reversed: " + rev)

def count_vowels():
    text = entry.get()
    count = 0
    for ch in text:
        if ch in "aeiou":              # LOGIC BUG: ignores uppercase vowels
            count += 1
    result.config(text="Vowels: " + str(count))

def clear_all():
    result.config(text="")             # LOGIC BUG: entry not cleared

root = tk.Tk()
root.title("Text Utility")

tk.Label(root, text="Enter Text").grid(row=0, column=0)

entry = tk.Entry(root, width=30)
entry.grid(row=0, column=1)

tk.Button(root, text="Length", command=show_length).grid(row=1, column=0)
tk.Button(root, text="Reverse", command=reverse_text).grid(row=1, column=1)
tk.Button(root, text="Count Vowels", command=count_vowels).grid(row=2, column=0)
tk.Button(root, text="Clear", command=clear_all).grid(row=2, column=1)

result = tk.Label(root text="Result")   # SYNTAX BUG: missing comma
result.grid(row=3, column=0, columnspan=2)

root.mainloop()
