#include <stdio.h>

int main(){
    int tipe;

    printf("Pilihan Menu Makanan \n"); 
    printf("1.Nasi Goreng \n");
    printf("2.Capcay \n");
    printf("3.Fuyunghay\n");
    printf("4.Eskrim\n");
    printf("Masukkan Pilihan : ");
    
    scanf("%d",&tipe);

    switch (tipe)
    {
    case 1:
        printf("Pilihan anda adalah Nasi Goreng\n");
        break; //Break is used to end the case checking for the following line
    case 2:
        printf("Pilihan anda adalah Capcay\n");
        //if not use break, the sub-block afterwards will be runn
        //try input 2 and see what happened
    case 3:
        printf("Pilihan anda adalah Fuyunghay\n");
        break;
    case 4:
        printf("Pilihan anda adalah Eskrim\n");
        break;
    }
    
    
    return 0;
}