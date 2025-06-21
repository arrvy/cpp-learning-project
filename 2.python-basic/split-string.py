words = "i love demak"

print(words.split()) #split when encounter a whitespaces


kata2 = sorted(words.split()) #become a list items
print(kata2) #! why become none? because sort reutrn none

kata = words.split()
kata.sort()
print(kata) #we have to first sort them

print(words.split().sort()) #only return none, because sort doesnt reutrn a value

#! String bersifat immutable
words.replace("demak","kudus") 
print(f"\nHasil Replace Adalah '{words}'")
print(f"Hasil Replace Adalah '{words.replace("demak","kudus")}'\n") 

print(type(words),"\n")

print(f"yes {type(words)}",words,"banget\n")