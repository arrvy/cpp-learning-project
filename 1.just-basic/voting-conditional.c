#include <stdio.h>

int main(){
    int age;
    const int MINIMUM = 18 ;
    
    printf("Masukan umur anda: ");
    scanf("%d",&age);

    //coba pakai ternary operation
    (age>=MINIMUM) ? printf ("Umur Mencukupi Untuk Pemilu") : printf("Umur Tidak Mencukupi Untuk Pemilu");
    //Coba pakai while dan program akan berhenti ketika klik key close
}