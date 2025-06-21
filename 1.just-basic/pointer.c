#include <stdio.h>


int main(int argc, char const *argv[])
{
    int umur;
    int *ptr = &umur; //bisa int* atau int *

    printf("Masukkan Umur Anda : ");
    scanf("%d",&umur);

    printf("Umur anda adalah %d\n",umur);
    printf("Alamat dari variabel umur adalah %p\n",ptr);
    printf("Alamat dari variabel umur adalah %p\n",&umur);

    printf("Umur anda adalah (dereference) : %d\n",*ptr);
    
    
    return 0;
}
