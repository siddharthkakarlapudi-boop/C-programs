colors = ["red", "green", "blue", "orange"]
n = len(colors)

for i in range(n):
    neg_index = i - n
    print(f"{colors[i]} is at index {neg_index}")
