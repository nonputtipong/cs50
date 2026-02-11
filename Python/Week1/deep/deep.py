x = input("What is the Answer to the Great Question of Life, the Universe, and Everything? ")
x = (x.lower())
x = (x.strip())
y = ["42", "forty-two", "forty two"]
if x in y:
    print ("Yes")
else:
    print ("No")