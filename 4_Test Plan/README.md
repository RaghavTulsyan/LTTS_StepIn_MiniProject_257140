# TEST PLAN:

## Table no1: High level test plan

| **Test_ID** | **Description**                                                     | **Exp I/P**                                                    | **Exp O/P**                 | **Actual O/P** | **Type of Test**   |
|---------|-----------------------------------------------------------------|------------------------------------------------------------|-------------------------|------------|----------------|
| H_01    | Test function calculating the mortgage function        | Values taken as an Argument from main .c      | Mortgage            | SUCCESS    | Scenario Based |
| H_02    | Test function calculating the loan function            | Values taken as an Argument from main .c      | Loan Payment Amount | SUCCESS    | Scenario Based |


## Table no2: Low level test plan

| **Test ID** | **Description**                                                | **Exp I/P**                               | **Exp O/P** | **Actual O/P** | **Type of test** |
|-------------|----------------------------------------------------------------|-------------------------------------------|-------------|----------------|------------------|
| L_01        | To check value of Mortgage Amount         | Principal- 175000, Annual Interest - 11, Period - 5        | 3804.91     | 3804.91        | Scenario Based   |
| L_02        | To check value of Mortgage Amount         | Principal- 750000, Annual Interest - 8, Period - 2         | 33920.50       | 33920.50          | Scenario Based   |
| L_03        | To check value of Mortgage Amount         | Principal- 650000, Annual Interest - 13.6, Period - 10     | 9936.57     | 9936.57        | Scenario Based   |
| L_04        | To check value of Mortgage Amount         | Principal- 950000, Annual Interest - 28, Period - 10       | 23651.96      | 23651.96         | Scenario Based   |
| L_05        | To check value of Loan Amount             | Principal- 2000000, Annual Interest - 12, Period - 5       | 44488.93    | 44488.93        | Scenario Based   |
| L_06        | To check value of Loan Amount             | Principal- 1550000, Annual Interest - 8, Period - 12       | 16778.02      | 16778.02         | Scenario Based   |
| L_07        | To check value of Loan Amount             | Principal- 100000, Annual Interest - 15, Period - 2        | 4848.65      | 4848.65          | Scenario Based   |
| L_08        | To check value of Loan Amount             | Principal- 1265420, Annual Interest - 13.5, Period - 6     | 25737.30     | 25737.30        | Scenario Based   |
