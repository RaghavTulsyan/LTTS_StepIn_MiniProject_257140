#include <math.h>
#include <stdio.h>
#include "header.h"

float mortgage(int principal, float annualInterest, int years){
    
    int MONTHS_IN_YEAR = 12;
    int PERCENT = 100;

    float monthlyInterest = annualInterest / PERCENT / MONTHS_IN_YEAR;
    int numberOfPayments = years * MONTHS_IN_YEAR;

    float mortgageValue = principal * (monthlyInterest * pow(1 + monthlyInterest, numberOfPayments)) / (pow(1 + monthlyInterest, numberOfPayments) - 1);

    printf("\n");
    printf("MORTGAGE\n");
    printf("--------\n");
    printf("Monthly Payments: %.2f \n", mortgageValue);
    printf("\n");
    printf("PAYMENT SCHEDULE\n");
    printf("----------------\n");
    for(int i=1;i<=numberOfPayments;i++){
        float balance = principal * (pow(1 + monthlyInterest, numberOfPayments) - pow(1 + monthlyInterest, i)) / (pow(1 + monthlyInterest, numberOfPayments) - 1);
        printf("\n %d. %.2f\n",i, balance);
    }
    return mortgageValue;

}