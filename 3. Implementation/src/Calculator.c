#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calculator.h"

int main(){
    printf("\nDebt Payment Calculator\n");
    printf("-----------------------\n");
    printf("\n");
    printf("\nChoose your Calculator: -\n");
    printf("\n 1. Mortgage Calculator\n");
    printf("\n 2. Loan Calculator\n");
    printf("\n");
    int choice;
    while(1){
        printf("Enter Your Choice (1 or 2): ");
        scanf("%d", &choice);
        if (choice == 1 || choice == 2)
            break;
        printf("\nEnter a valid value\n");
    }

    if(choice==1){
        mortgage();
    }
    if(choice==2){
        loan();
    }
    return 0;
}