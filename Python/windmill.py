
while True:
    height = int(input("Height: "))
    if height > 0:
        break

for row in range(height):
    for space in range(row):
        print(" ", end="")
    for hashtag in range(height - row, 0, -1):
        print("\033[31m#\033[31m", end="")
    for space1 in range(height - row -1, 0, -1):
        print(" ", end="")
    for hashtag1 in range(row+1):
        print("\033[31m#\033[31m", end="")
    print()

for row in range(height):
    for hashtag in range(height - row, 0, -1):
        print("\033[31m#\033[31m", end="")
    for space in range(row):
        print(" ", end="")
    for hashtag1 in range(row+1):
        print("\033[31m#\033[31m", end="")
    for space1 in range(height - row -1, 0, -1):
        print(" ", end="")
    print()