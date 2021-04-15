#include "unity.h"
#include "header.h"

void setUp(){

}

void tearDown(){

}

void mortgage_test(){
    principal = 175000;
    monthlyInterest = 5;
    numberOfPayments = 2;
    TEST_ASSERT_EQUAL(7677.40,mortgage);

}

void loan_test(){
    principal = 2000000;
    annualInterestRate = 12;
    years = 5;
    TEST_ASSERT_EQUAL(44.96,Discount);
    TEST_ASSERT_EQUAL(44488.93,loanPaymentAmount);

}

int main()
{
    UNITY_BEGIN();
    RUN_TEST(mortgage_test);
    RUN_TEST(loan_test);
    return UNITY_END();
}