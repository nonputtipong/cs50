# TODO

from cs50 import get_int

height = get_int("Height: ")

while height <= 0 or height >= 9:
    height = get_int("Height: ")

for i in range(height):
    for k in range(2):
        if k == 0:
            if height != 1:
                print(" " * (height - i - 1), end="")
            print("#" * (i + 1), end="")
            print("  ", end="")
        else:
            print("#" * (i + 1))