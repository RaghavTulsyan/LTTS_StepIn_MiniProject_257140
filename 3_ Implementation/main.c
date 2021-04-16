#include <stdio.h>
#include "header.h"

int main(){
    printf("\nDebt Payment Calculator\n");
    printf("-----------------------");
    printf("\n");
    printf("\nChoose your Calculator: -\n");
    printf("\n 1. Mortgage Calculator.\n");
    printf("\n 2. Loan Calculator.\n");
    printf("\n 3. Exit the Program.\n");
    printf("\n");
    int choice;
    while(1){
        printf("Enter Your Choice (1 or 2 or 3): ");
        scanf("%d", &choice);
        if (choice == 1 || choice == 2 || choice == 3)
            break;
        printf("\nEnter a valid value\n");
    }

    if(choice==1){
        printf("\nMortgage Calculator\n");
        printf("-------------------");
        printf("\n");
        int principal;
        float annualInterest;
        int years;

        

        while (1) {
            printf("\nPrincipal: ");
            scanf("%d", &principal);
            if (principal >= 1000 && principal <= 1000000)
                break;
            printf("\nEnter a value between 1000 and 1000000\n");
        }

        while (1) {
            printf("\nAnnual Interest Rate: ");
            scanf("%f", &annualInterest);
            if (annualInterest >= 1 && annualInterest <= 30) {
                break;
            }
            printf("\nEnter a value between 1 and 30\n");
        }

        while (1) {
            printf("\nPeriod (Years): ");
            scanf("%d", &years);
            if (years >= 1 && years <= 30) {
                break;
            }
            printf("\nEnter a value between 1 and 30.\n");
        }
        mortgage(principal, annualInterest, years);
        printf("\nThank You for using our Calculator!\n");
    }

    if(choice==2){
        printf("\nLoan Calculator\n");
        printf("---------------");
        printf("\n");

        float principal;
        float annualInterestRate;
        int years;

        printf("\nLoan Amount: ");
        scanf("%f",&principal);
        printf("\nPeriod (Years): ");
        scanf("%d",&years);
        printf("\nAnnual interest Rate: ");
        scanf("%f",&annualInterestRate);
        loan(principal, annualInterestRate, years);
        printf("\nThank You for using our Calculator!\n");
    }
    if(choice==3){
        printf("\nThank You for using our Calculator!\n");
    }
    return 0;
}