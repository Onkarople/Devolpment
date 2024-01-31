import tkinter as tk
import time

class MyWindow:
    def __init__(self, master):
        self.master = master
        self.is_on = False

        self.off_image = tk.PhotoImage(file="off.png")
        self.on_image = tk.PhotoImage(file="on.png")

        self.create_button()

    def create_button(self):
        self.button9 = tk.Button(
            master=self.master,
            image=self.off_image,
            text="L1",
            font=('Helvetica', 25, 'bold')
        )
        self.button9.grid(row=8, column=0, pady=5, padx=5)
        self.button9.place(x=100, y=400)
        self.button9.config(command=self.toggle_button)

    def toggle_button(self):
        if self.is_on:
            self.button9.config(image=self.off_image)
            self.is_on = False
        else:
            self.button9.config(image=self.on_image)
            self.is_on = True

def main():
    root = tk.Tk()
    my_window = MyWindow(root)
    root.mainloop()

if __name__ == "__main__":
    main()
