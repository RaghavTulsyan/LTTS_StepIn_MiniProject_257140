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
        mortgage();
        printf("\nThank You for using our Calculator!\n");
    }
    if(choice==2){
        printf("\nLoan Calculator\n");
        printf("---------------");
        printf("\n");
        loan();
        printf("\nThank You for using our Calculator!\n");
    }
    if(choice==3){
        printf("\nThank You for using our Calculator!\n");
    }
    return 0;
} 
//gcc mortgage.c loan.c main.c header.h