import math
import matplotlib.pyplot as plt

# Parameters
num_points = 1000
alpha = 1.0
t = 0.01

# Generate data
x_values = []
y_values = []

with open("out.csv", "w") as out_file:
    for i in range(num_points + 1):
        x = i / num_points
        y = math.sin(math.pi * x) * math.exp(-alpha * (math.pi ** 2) * t)
        x_values.append(x)
        y_values.append(y)
        out_file.write(f"{x},{y}\n")

# Create plot
plt.figure(figsize=(10, 6))
plt.plot(x_values, y_values, 'b-', linewidth=2)
plt.title(f"Decaying Sine Wave\n(α={alpha}, t={t})")
plt.xlabel('x')
plt.ylabel('y(x)')
plt.grid(True)
plt.xlim(0, 1)
plt.tight_layout()

# Save and show plot
plt.savefig('plot.png', dpi=300)
plt.show()