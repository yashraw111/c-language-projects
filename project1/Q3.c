#include<stdio.h>
int main(){
    int FA,SA,TA;
    printf("Enter the FA:");
    scanf("%d",&FA);
    printf("Enter the SA:");
    scanf("%d",&SA);
    SA= 180-(FA+SA);
    printf("third Angle %d",SA);
}