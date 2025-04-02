// Q.2 Gross Salary Calculator
#include<stdio.h>

int main(){
    int BaseSalary,TP;
    float HRA,DA,TA,result;
    printf("Enter BaseSalary:");
    scanf("%d",&BaseSalary);
    printf("Enter the HRA:");
    scanf("%f",&HRA);
    printf("Enter the DA:");
    scanf("%f",&DA);
    printf("Enter the TA:");
    scanf("%f",&TA);
    // TP = 
    result = (BaseSalary*(HRA+DA+TA))/100;
    printf("Gross Salary %.2f",BaseSalary+result);
}