#include <stdio.h>

int main(){
    int a = 6.99; //the value at floating point are neglected
    int b = a==6; //assigned the boolean value (still integer) because the result of comparison between variable a and value 6
    
    
   /* in c, we use parentheses "()" for writing parameters of if, else if(conditional sentence).
    While in python, we can write without it     */
    if (b == false && b == 0){
        printf("nilai dari variabel b tidak sama dengan 6");
    }else{
        printf("Nilai dari variabel b sama dengan 6 ");
    }

}