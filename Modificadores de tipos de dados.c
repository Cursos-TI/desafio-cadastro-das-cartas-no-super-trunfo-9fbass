#include <stdio.h>


int main(){

    double numeroPreciso = 3.141592653589793;
    long double numeroMuitoPreciso = 3.141592653589793238463;

    printf("Número Preciso (doube): %.15f\n", numeroPreciso);
    printf("Número Muito Preciso (long double): %.21Lf\n", numeroMuitoPreciso);





return 0;


}