hari=6

match hari:
    case 1:
        print("Workout")
    case 2:
        print("Yoga")
    case 3|4|5:
        print("Belajar")
    case _:
        print("TikTokan")

print ("enam") if hari  == 6 else print ("bukan enam")
