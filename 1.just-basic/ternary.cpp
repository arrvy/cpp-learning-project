#include <stdio.h>

/* it called Ternary Operation or simply Short Hand If... else */

int main(){
    int a = 6.99;
    int b = a==6; 
    
    // dibandingkan 1 karena b mengandung value boolean
    (b == 6) ? printf("nilai b sama dengan 6") : printf("nilai b ga sama dengan 6");
    if (b == true){
        printf("\nKarena b mengandung nilai boolean hasil perbandingan a dan 6");
    }
}


