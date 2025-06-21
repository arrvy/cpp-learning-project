#include <stdio.h>

int c_to_r(float celcius, float reamur){
    //gini harus pake reference/pointer
    reamur = (4/5) * celcius;
}

//or

float celcius_to_reamur(float celcius){
    printf("%f\n",(4*celcius)/5); //why value equal zero
    return (4*celcius/5);
    
}

int main(int argc, char const *argv[])
{
    float c_value,r_value,f_value,k_value;

    printf("Masukkan nilai suhu celcius : ");
    scanf("%f",&c_value);
    
    printf("Suhu yang dimasukkan adalah : %f \n", c_value);
    r_value = celcius_to_reamur(c_value);

    printf("Nilai dari konversi C ke R adalah : %f",r_value);

    

    return 0;
}
