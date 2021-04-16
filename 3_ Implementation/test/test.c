#include "unity.h"
#include "header.h"

void setUp(){

}

void tearDown(){

}

void mortgage_test(){
    TEST_ASSERT_EQUAL(mortgage(175000, 11, 5), 3804.91);
    TEST_ASSERT_EQUAL(mortgage(750000, 8, 2), 33920.50);
    TEST_ASSERT_EQUAL(mortgage(650000, 13.6, 10), 9936.57);
    TEST_ASSERT_EQUAL(mortgage(950000, 28, 10), 23651.96);

}

void loan_test(){
    TEST_ASSERT_EQUAL(loan(2000000, 12, 5), 44488.93);
    TEST_ASSERT_EQUAL(loan(1550000, 8, 12), 16778.02);
    TEST_ASSERT_EQUAL(loan(100000, 15, 2), 4848.65);
    TEST_ASSERT_EQUAL(loan(1265420, 13.5, 6), 25737.30);

}

int main()
{
    UNITY_BEGIN();
    RUN_TEST(mortgage_test);
    RUN_TEST(loan_test);
    return UNITY_END();
}