

def main():
    word = input("Masukkan Kata : ")
    
    print(word[1:(len(word)-1)]) #slice from index 1 (elemen 2) up to but not include last index (only left border is inclusive, right border is exclusive)

if __name__ == '__main__':
    main()