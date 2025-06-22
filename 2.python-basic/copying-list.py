firslist = ["nasi","Bubur","Mie"]

#seclist = firslist.copy(key = str.upper) #! copy method doesn't accept any parameter

#instead, we use this
seclist = [i.capitalize() for i in firslist]

print(seclist)

#? interesting way
thirdlist = firslist + [] #copy list, bisa pake cara ini, dijamin ga jiplak/ngereferensi
thirdlist[0] = "ayam"
fourthlist = firslist[:]
fourthlist[0] = "Bebek"
print(firslist)
print(thirdlist)
print(fourthlist)