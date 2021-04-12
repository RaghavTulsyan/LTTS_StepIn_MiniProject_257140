#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "calculator.h"

int mortgage(){
    int principal;
    float monthlyInterest;
    int numberOfPayments;

    int MONTHS_IN_YEAR = 12;
    int PERCENT = 100;

    while (1) {
        printf("\nPrincipal: ");
        scanf("%d", &principal);
        if (principal >= 1000 && principal <= 1000000)
            break;
        printf("\nEnter a value between 1000 and 1000000\n");
    }

    while (1) {
        printf("\nAnnual Interest Rate: ");
        float annualInterest;
        scanf("%f", &annualInterest);
        if (annualInterest >= 1 && annualInterest <= 30) {
            monthlyInterest = annualInterest / PERCENT / MONTHS_IN_YEAR;
            break;
        }
        printf("\nEnter a value between 1 and 30\n");
    }

    while (1) {
        printf("\nPeriod (Years): ");
        int years;
        scanf("%d", &years);
        if (years >= 1 && years <= 30) {
            numberOfPayments = years * MONTHS_IN_YEAR;
            break;
        }
        printf("\nEnter a value between 1 and 30.\n");
    }

    float mortgage = principal * (monthlyInterest * pow(1 + monthlyInterest, numberOfPayments)) / (pow(1 + monthlyInterest, numberOfPayments) - 1);
    printf("\n");
    printf("MORTGAGE\n");
    printf("--------\n");
    printf("Monthly Payments: %.2f \n", mortgage);
    printf("\n");
    printf("PAYMENT SCHEDULE\n");
    printf("----------------\n");
    for(int i=1;i<=numberOfPayments;i++){
        float balance = principal * (pow(1 + monthlyInterest, numberOfPayments) - pow(1 + monthlyInterest, i)) / (pow(1 + monthlyInterest, numberOfPayments) - 1);
        printf("\n %d. %.2f\n",i, balance);
    }
    return 0;
}