#include <stdio.h>

int main(){
    int numbers,revnumbers;
    printf("Masukkan Nilai Yang Akan Dibalikk : ");
    scanf("%d",&numbers);
    printf("%d\n",revnumbers);
    revnumbers=0;
    //it mean while still run when numbers variable still have value (not zero)
    while (numbers){
        //when firs loop, revnumbers should have 0 value
        //not exactly 0 or always 0, it will have garbage value
       
        revnumbers = revnumbers*10+numbers%10; //pick only last digit of numbers and put in the revnumbers

        numbers/=10; //deleting the last digit

    }

    printf("Hasil dari kebalikannya adalah : %d\ndan variabel awal jadi : %d\n",revnumbers,numbers);

    //? FUN info
/*  When we use reference/pointer at writing variable that we will print, the value will be the adress of it \
(maybe the adress), not the value of variable
 */    
    printf("Hasil dari kebalikannya adalah : %d\n dan variabel awal jadi : %d\n",&revnumbers,&numbers);

    printf("Hasil Adress dari kebalikannya adalah : %p\n dan variabel awal jadi : %p\n",&revnumbers,&numbers); //pointer format specifier
    return 0;
}