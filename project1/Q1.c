// Q.1 Temperature Converter

#include<stdio.h>

int main(){
    float celsius,result;
    printf("The temperature in Celsius:");
    scanf("%f",&celsius);
    result = (9.0 / 5.0) * celsius + 32;
    printf("The temperature in Fahrenheit: %.1f\n", result);
}