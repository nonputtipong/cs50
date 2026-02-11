# TODO
from cs50 import get_string

input = get_string("Text: ")

letters = words = sentences = 0

for i in range(len(input)):
    if input[i].isalpha():
        letters += 1
    elif input[i].isspace():
        words += 1
    elif input[i] == "." or input[i] == "!" or input[i] == "?":
        sentences += 1

words += 1

index = int(round((0.0588 * (letters / words) * 100 - 0.296 * (sentences / words) * 100 - 15.8), 0))

if index <= 1:
    print("Before Grade 1")
elif index >= 2 and index <= 15:
    print(f"Grade {index}")
elif index >= 16:
    print("Grade 16+")