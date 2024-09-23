# import random
# import matplotlib.pyplot as plt
# import matplotlib.animation as animation

# # Parameters for the simulation
# num_customers = 15  # Number of customers in the simulation
# arrival_rate = 2    # Average time between arrivals (minutes)
# service_rate = 3    # Average service time (minutes)

# # Lists to store simulation data
# arrival_times = []
# service_times = []
# wait_times = []

# # Simulate customer arrivals and service times
# for i in range(num_customers):
#     if i == 0:
#         arrival_time = random.expovariate(1/arrival_rate)
#     else:
#         arrival_time += random.expovariate(1/arrival_rate)
    
#     service_time = random.expovariate(1/service_rate)
#     if i == 0:
#         start_time = arrival_time
#     else:
#         start_time = max(arrival_time, start_time + service_times[-1])
    
#     wait_time = start_time - arrival_time
#     arrival_times.append(arrival_time)
#     service_times.append(service_time)
#     wait_times.append(wait_time)

# # Initialize the figure for animation
# fig, ax = plt.subplots(figsize=(10, 6))
# ax.set_xlim(0, num_customers + 1)
# ax.set_ylim(0, max(wait_times) + 5)
# ax.set_xlabel('Customer')
# ax.set_ylabel('Wait Time (minutes)')
# ax.set_title('Simulated Ticket Counter Queue')

# bars = ax.bar([], [], color='blue')

# # Function to initialize the animation
# def init():
#     ax.clear()
#     ax.set_xlim(0, num_customers + 1)
#     ax.set_ylim(0, max(wait_times) + 5)
#     ax.set_xlabel('Customer')
#     ax.set_ylabel('Wait Time (minutes)')
#     ax.set_title('Simulated Ticket Counter Queue')
#     return bars

# # Function to update the plot for each frame (representing each customer)
# def update(frame):
#     ax.clear()
#     ax.set_xlim(0, num_customers + 1)
#     ax.set_ylim(0, max(wait_times) + 5)
#     ax.set_xlabel('Customer')
#     ax.set_ylabel('Wait Time (minutes)')
#     ax.set_title('Simulated Ticket Counter Queue')
    
#     x_data = list(range(1, frame + 1))  # Customer numbers
#     y_data = wait_times[:frame]         # Wait times for served customers
    
#     ax.bar(x_data, y_data, color='blue')
#     return bars

# # Create the animation
# ani = animation.FuncAnimation(fig, update, frames=num_customers + 1, init_func=init, blit=False, interval=1000)

# # Show the animation
# plt.show()

# # Display final results in console
# print("Customer\tArrival Time\tService Time\tWait Time")
# for i in range(num_customers):
#     print(f"{i+1}\t\t{arrival_times[i]:.2f}\t\t{service_times[i]:.2f}\t\t{wait_times[i]:.2f}")


import random
import matplotlib.pyplot as plt
import matplotlib.animation as animation
import numpy as np

# Parameters for the simulation
num_customers = 40  # Number of customers
arrival_rate = 2    # Average arrival time in minutes
service_rate = 3    # Average service time in minutes

# Lists to store simulation data
arrival_times = []
service_times = []
wait_times = []

# Simulate customer arrivals and service times
for i in range(num_customers):
    if i == 0:
        arrival_time = random.expovariate(1/arrival_rate)
    else:
        arrival_time += random.expovariate(1/arrival_rate)
    
    service_time = random.expovariate(1/service_rate)
    if i == 0:
        start_time = arrival_time
    else:
        start_time = max(arrival_time, start_time + service_times[-1])
    
    wait_time = start_time - arrival_time
    arrival_times.append(arrival_time)
    service_times.append(service_time)
    wait_times.append(wait_time)

# Initialize the figure for animation
fig, (ax1, ax2) = plt.subplots(2, 1, figsize=(10, 8))
fig.suptitle('Ticket Counter Simulation', fontsize=16)

ax1.set_xlim(0, num_customers + 1)
ax1.set_ylim(0, max(wait_times) + 5)
ax1.set_xlabel('Customer')
ax1.set_ylabel('Wait Time (minutes)')
ax1.set_title('Customer Waiting Times')

ax2.set_xlim(0, num_customers)
ax2.set_ylim(0, 1)
ax2.set_yticks([])  # Hide y-axis on the progress bar
ax2.set_title('Counter Service Progress')

bars = ax1.bar([], [], color='lightblue')
progress_bars = ax2.bar([], [], color='green')

# Function to initialize the animation
def init():
    ax1.clear()
    ax1.set_xlim(0, num_customers + 1)
    ax1.set_ylim(0, max(wait_times) + 5)
    ax1.set_xlabel('Customer')
    ax1.set_ylabel('Wait Time (minutes)')
    ax1.set_title('Customer Waiting Times')
    
    ax2.clear()
    ax2.set_xlim(0, num_customers)
    ax2.set_ylim(0, 1)
    ax2.set_yticks([])
    ax2.set_title('Counter Service Progress')
    
    return bars, progress_bars

# Function to update the plot for each frame (representing each customer)
def update(frame):
    ax1.clear()
    ax1.set_xlim(0, num_customers + 1)
    ax1.set_ylim(0, max(wait_times) + 5)
    ax1.set_xlabel('Customer')
    ax1.set_ylabel('Wait Time (minutes)')
    ax1.set_title(f'Customer {frame+1} is being served')

    # Customer queue
    x_data = list(range(1, frame + 2))  # Customer numbers
    y_data = wait_times[:frame + 1]     # Wait times for served customers
    
    ax1.bar(x_data, y_data, color='lightblue')
    
    # Display progress for the current customer being served
    ax2.clear()
    ax2.set_xlim(0, num_customers)
    ax2.set_ylim(0, 1)
    ax2.set_yticks([])

    progress = np.zeros(num_customers)
    progress[:frame+1] = 1  # Mark customers who have been served
    ax2.bar(range(num_customers), progress, color='green')

    # Display a progress bar label to indicate serving process
    ax2.text(0.5, 0.5, f'Serving Customer {frame+1}', fontsize=14, ha='center', va='center')

    return bars, progress_bars

# Create the animation
ani = animation.FuncAnimation(fig, update, frames=num_customers, init_func=init, blit=False, interval=1500)

# Show the animation
plt.tight_layout()
plt.show()

# Display final results in console
print("Customer\tArrival Time\tService Time\tWait Time")
for i in range(num_customers):
    print(f"{i+1}\t\t{arrival_times[i]:.2f}\t\t{service_times[i]:.2f}\t\t{wait_times[i]:.2f}")
