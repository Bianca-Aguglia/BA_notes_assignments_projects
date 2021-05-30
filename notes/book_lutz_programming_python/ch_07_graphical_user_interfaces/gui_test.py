import tkinter as tk

# widget1 = tk.Label(None, text = 'widget 1', background='red')
# widget2 = tk.Label(None, text = 'widget 2', background='orange')
# widget3 = tk.Label(None, text = 'widget 3', background='blue')
# widget1.pack()
# widget2.pack(expand = tk.TRUE)
# widget3.pack(expand = tk.TRUE, fill = tk.BOTH)

win = tk.Frame()
win.pack()
b1 = tk.Button(win, text = 'btn 1')
b2 = tk.Button(win, text = 'btn 2')
b3 = tk.Button(win, text = 'btn 3')
b4 = tk.Button(win, text = 'btn 4')
b1.pack(side = tk.TOP, expand=tk.TRUE, fill=tk.BOTH)
b2.pack(side = tk.LEFT, expand=tk.TRUE, fill=tk.BOTH)
b3.pack(side = tk.TOP, expand=tk.TRUE, fill=tk.BOTH)
b4.pack(side = tk.RIGHT, expand=tk.TRUE, fill=tk.BOTH)

tk.mainloop()