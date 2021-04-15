#include <math.h>
#include <stdio.h>
#include "header.h"

int loan(){
    float principal;
    float annualInterestRate;
    int years;

    printf("\nLoan Amount: ");
    scanf("%f",&principal);
    printf("\nPeriod (Years): ");
    scanf("%d",&years);
    printf("\nAnnual interest Rate: ");
    scanf("%f",&annualInterestRate);
    
    float i = ((annualInterestRate)/(100))/12;
    int months = years*12;

    float Discount = (pow((1+i),months)-1) / ((i)*pow((1+i),months));
    float loanPaymentAmount = (principal)/(Discount);

    printf("\n");
    printf("Loan Details\n");
    printf("------------\n");
    printf("\nDiscount: %.2f\n",Discount);
    printf("\nMonthly Loan Payment: %.2f\n",loanPaymentAmount);

    return 0;
}