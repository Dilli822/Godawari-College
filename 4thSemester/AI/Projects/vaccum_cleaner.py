import tkinter as tk
from tkinter import ttk
import time

class VacuumCleaner:
    CLEAN = 'Clean'
    DIRTY = 'Dirty'

    def __init__(self, root):
        self.root = root
        self.root.title("Vacuum Cleaner App")

        # Initialize user input variables
        self.current_location_var = tk.StringVar()
        self.room_a_status_var = tk.StringVar()
        self.room_b_status_var = tk.StringVar()

        # Create entry widgets for user input
        tk.Label(root, text="Current Location of Vacuum Cleaner (A or B):").pack()
        tk.Entry(root, textvariable=self.current_location_var).pack()

        tk.Label(root, text="Room A Status:").pack()
        self.room_a_dropdown = ttk.Combobox(root, textvariable=self.room_a_status_var, values=[self.CLEAN, self.DIRTY])
        self.room_a_dropdown.pack()
        self.room_a_dropdown.set(self.CLEAN)  # Set default value

        tk.Label(root, text="Room B Status:").pack()
        self.room_b_dropdown = ttk.Combobox(root, textvariable=self.room_b_status_var, values=[self.CLEAN, self.DIRTY])
        self.room_b_dropdown.pack()
        self.room_b_dropdown.set(self.DIRTY)  # Set default value

        # Create a button to trigger the cleaning process
        self.clean_button = tk.Button(root, text="Clean", command=self.run)
        self.clean_button.pack()

        # Create canvas to display environment
        self.canvas = tk.Canvas(root, width=600, height=300)  # Increased canvas size
        self.canvas.pack()

        # Create label to display status
        self.status_label = tk.Label(root, text="")
        self.status_label.pack()

        # Initialize vacuum cleaner variable
        self.vacuum_cleaner = None

    def draw_environment(self):
        self.canvas.delete("all")

        for room, status_var in [('A', self.room_a_status_var), ('B', self.room_b_status_var)]:
            status = status_var.get()
            color = "green" if status == self.CLEAN else "red"
            x1, y1, x2, y2 = 75 if room == 'A' else 325, 50, 225 if room == 'A' else 475, 250  # Adjusted coordinates and increased room sizes
            self.canvas.create_rectangle(x1, y1, x2, y2, fill=color)
            
            label_x = (x1 + x2) / 2
            label_y = y1 + 150
            label_color = "white"  # Set the text color for room labels
            label_size = 12  # Set the text size for room labels
            self.canvas.create_text(label_x, label_y, text=f"Room {room} ({status})", font=('Arial', label_size, 'bold'), fill=label_color)

        if self.vacuum_cleaner:
            # Adjusted coordinates for the smaller vacuum cleaner
            x1, y1, x2, y2 = self.vacuum_cleaner
            vacuum_width = x2 - x1
            vacuum_height = y2 - y1

            # Draw the vacuum cleaner body
            self.canvas.create_rectangle(x1, y1, x2, y2, fill="gray")

            # Draw the front wheel
            wheel_radius = vacuum_width // 10
            wheel_x, wheel_y = x1 + vacuum_width // 4, y2 - wheel_radius - 5
            self.canvas.create_oval(wheel_x - wheel_radius, wheel_y - wheel_radius, wheel_x + wheel_radius, wheel_y + wheel_radius, fill="black")

            # Draw the back wheel
            wheel_x = x1 + 3 * vacuum_width // 4
            self.canvas.create_oval(wheel_x - wheel_radius, wheel_y - wheel_radius, wheel_x + wheel_radius, wheel_y + wheel_radius, fill="black")

            # Draw the suction pipe
            pipe_width = vacuum_width // 20
            pipe_length = vacuum_height // 2
            pipe_x1, pipe_y1 = x1 + vacuum_width // 2, y1 + vacuum_height // 2
            pipe_x2, pipe_y2 = pipe_x1, pipe_y1 - pipe_length
            self.canvas.create_line(pipe_x1, pipe_y1, pipe_x2, pipe_y2, width=pipe_width, fill="darkgray")

            # Draw the handle
            handle_width = vacuum_width // 20
            handle_height = vacuum_height // 4
            handle_x, handle_y = x1 + vacuum_width // 2 - handle_width // 2, y1 - handle_height
            self.canvas.create_rectangle(handle_x, handle_y, handle_x + handle_width, handle_y + handle_height, fill="darkgray")

            # Draw the text label for the vacuum cleaner
            label_x = (x1 + x2) / 2
            label_y = (y1 + y2) / 2
            self.canvas.create_text(label_x, label_y, text="Vacuum Cleaner", font=('Arial', 10, 'bold'), fill="white")

        self.root.update()

    def scan_and_clean(self, room):
        if room == 'A':
            status_var = self.room_a_status_var
        elif room == 'B':
            status_var = self.room_b_status_var
        else:
            return False

        if status_var.get() == self.DIRTY:
            status_var.set(self.CLEAN)
            return True
        else:
            return False

    def move_left(self):
        self.current_location = 'A'

    def move_right(self):
        self.current_location = 'B'

    def update_status_label(self, message):
        self.status_label.config(text=message)
        self.root.update()

    def run(self):
        # Get user input values
        self.current_location = self.current_location_var.get().upper()

        # Cleaning process
        while any(status_var.get() == self.DIRTY for status_var in [self.room_a_status_var, self.room_b_status_var]):
            while self.scan_and_clean(self.current_location):
                self.draw_environment()
                self.update_status_label(f"Cleaning in Room {self.current_location}...")
                time.sleep(1)

            if self.current_location == 'A':
                self.move_right()
            else:
                self.move_left()

            # Adjusted coordinates for the smaller vacuum cleaner
            self.vacuum_cleaner = (150 if self.current_location == 'A' else 400, 80, 200 if self.current_location == 'A' else 450, 140)
            self.draw_environment()
            self.update_status_label(f"Moving to Room {self.current_location}...")
            time.sleep(1)

        self.draw_environment()
        self.update_status_label("All rooms are clean. Task completed.")

if __name__ == "__main__":
    root = tk.Tk()
    vacuum = VacuumCleaner(root)
    root.mainloop()
