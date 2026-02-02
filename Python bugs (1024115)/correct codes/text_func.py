import tkinter as tk

def show_length():
    text = entry.get()
    length = len(text)
    result.config(text="Length: " + str(length))

def reverse_text():
    text = entry.get()
    rev = text[::-1]
    result.config(text="Reversed: " + rev)

def count_vowels():
    text = entry.get()
    count = 0
    for ch in text.lower():
        if ch in "aeiou":
            count += 1
    result.config(text="Vowels: " + str(count))

def clear_all():
    entry.delete(0, tk.END)
    result.config(text="Result")

root = tk.Tk()
root.title("Text Utility")

tk.Label(root, text="Enter Text").grid(row=0, column=0)

entry = tk.Entry(root, width=30)
entry.grid(row=0, column=1)

tk.Button(root, text="Length", command=show_length).grid(row=1, column=0)
tk.Button(root, text="Reverse", command=reverse_text).grid(row=1, column=1)
tk.Button(root, text="Count Vowels", command=count_vowels).grid(row=2, column=0)
tk.Button(root, text="Clear", command=clear_all).grid(row=2, column=1)

result = tk.Label(root, text="Result")
result.grid(row=3, column=0, columnspan=2)

root.mainloop()
