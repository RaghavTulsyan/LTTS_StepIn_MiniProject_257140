#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include "header.h"

float principal;
float annualInterestRate;
int years;

void details();
float discount(float annualInterestRate, int years);

int loan(){
    details();
    float Discount = discount(annualInterestRate, years);
    float loanPaymentAmount = (principal)/(Discount);
    printf("\n");
    printf("Loan Details\n");
    printf("------------\n");
    printf("\nDiscount: %.2f\n",Discount);
    printf("\nMonthly Loan Payment: %.2f\n",loanPaymentAmount);

    return 0;
}

void details(){
    printf("\nLoan Amount: ");
    scanf("%f",&principal);
    printf("\nPeriod (Years): ");
    scanf("%d",&years);
    printf("\nAnnual interest Rate: ");
    scanf("%f",&annualInterestRate);
}

float discount(float annualInterestRate, int years){
    float i = ((annualInterestRate)/(100))/12;
    int months = years*12;
    return (pow((1+i),months)-1) / ((i)*pow((1+i),months));
}