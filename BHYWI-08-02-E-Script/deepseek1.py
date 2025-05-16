import math

num_points = 1000
alpha = 1.0
t = 0.01

with open("out.csv", "w") as out_file:
    for i in range(num_points + 1):
        x = i / num_points
        y = math.sin(math.pi * x) * math.exp(-alpha * (math.pi ** 2) * t)
        out_file.write(f"{x},{y}\n")