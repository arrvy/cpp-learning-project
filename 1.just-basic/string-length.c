#include <stdio.h>
#include <string.h>
 

int main() {
  char alphabet[30];
  printf("Masukkan Nama Lengkap Anda : ");
  //untuk input string, tidak perlu menggunakan reference operator (&) 
  // why ?
  //scanf("%s",alphabet); // tapi menggunakan scanf tidak bisa input lebih dair 1 kata

  fgets(alphabet,sizeof(alphabet),stdin); //use size of because...
  //but why the length of the input is input + 1
  

  printf("%zu\n", strlen(alphabet));
  
  //we basically dont need use sizeof(alphabet)/sizeof(alphabet[1]) as the char type only use 1 bytes
  //this way will gonna be fine if we play with array, but not with strings
  //why is it one length longer, because at the end of the string, the null (null terminator) character will be written as the sign of the end of strings
  printf("%d",sizeof(alphabet)/sizeof(alphabet[1]));
  return 0;
}

