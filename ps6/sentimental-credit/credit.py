# TODO
from cs50 import get_string

number = get_string("Number: ")

digit = len(number)
chk1 = chk2 = 0
first_two = int(number[:2])

for i in range(len(number)):
    if digit % 2 == 0:
        if i % 2 == 0:
            tmp = int(number[i]) * 2
            chk2 += tmp // 10
            chk2 += tmp % 10
        else:
            chk1 += int(number[i])
    else:
        if i % 2 == 0:
            chk1 += int(number[i])
        else:
            tmp = int(number[i]) * 2
            chk2 += tmp // 10
            chk2 += tmp % 10

if (chk1 + chk2) % 10 != 0:
    print("INVALID")
else:
    if first_two == 34 or first_two == 37:
        if digit == 15:
            print("AMEX")
        else:
            print("INVALID")
    elif first_two >= 51 and first_two <= 55:
        if digit == 16:
            print("MASTERCARD")
        else:
            print("INVALID")
    elif first_two // 10 == 4:
        if digit == 16 or digit == 13:
            print("VISA")
        else:
            print("INVALID")
    else:
        print("INVALID")
