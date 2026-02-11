x = input("Greeting:")
y = x.lower().replace(" ","")

if y.startswith("hello"):
    print("$0")

elif y[0] == "h":
    print("$20")

else:
    print("$100")