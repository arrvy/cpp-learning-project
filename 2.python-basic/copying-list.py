firslist = ["nasi","Bubur","Mie"]

#seclist = firslist.copy(key = str.upper) #! copy method doesn't accept any parameter

#instead, we use this
seclist = [i.capitalize() for i in firslist]

print(seclist)

#? interesting way
thirdlist = firslist + []
thirdlist[0] = "ayam"
print(firslist)
