#include<stdio.h>

int main(){
     int num,count=0;

     printf("Enter a number:");
     scanf("%d",&num);


     if(num == 0){
        count =1;
     }
     else{
        while (num != 0)
        {
            // printf("%d\n",count);
            num = num / 10;
            count++;
        }
        
     }
     printf("Total Digits = %d\n",count);
}