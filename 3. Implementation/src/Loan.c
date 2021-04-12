#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "calculator.h"

float loanAmount,interestRate,Discount,i,loanPayment; //global variables
int years;

void loanDetails(void); //input from user regarding the loan
float annualRate(void);// interest rate 
float discount(void); //discount to be added

int loan() //main
{

    loanDetails(); //called three functions
    annualRate();
    discount();

    loanPayment = (loanAmount)/(Discount); //formula for monthly payments

    printf("\nThe Monthly Loan Payment is %.2f\n",loanPayment);
    printf("\n");
    return 0;

}

void loanDetails(void) //taking input from user
{
    printf("\nPlease Enter Total Loan Amount: ");
    scanf("%f",&loanAmount);
    printf("\nPlease Enter the Number of Years: ");
    scanf("%d",&years);
    printf("\nPlease Enter the Annual Rate to be Applied: ");
    scanf("%f",&interestRate);
}

float annualRate(void) //calculated annual rate
{
    float *ann;
    ann = &interestRate;
    i = ((*ann)/(100))/12;
    printf("\nThe Value for %d Years is %.2f\n",years,i);
    return i;
}

float discount(void) //calculated dicount
{    
    float *x,y;
    x = &i;
    y = 1 + *x;
    int n = years*12;

    float topD = (pow((y),n)-1);
    float botD = (y-1)*pow((y),n);
    Discount = topD/botD;
    printf("\nThe Value of Discount is : %.2f\n",Discount);
    return Discount;
}