/**
 * @file header.h
 * @author Raghav Tulsyan
 * @brief Header File for the Debt Payment Calculator.
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __HEADER_H__
#define __HEADER_H__

/**
 * @brief Used to trigger the Mortgage Calculator when chosen by the user.
 * 
 * @return int 
 */

int mortgage();

/**
 * @brief Used to trigger the Loan Calculator when chosen by the user.
 * 
 * @return int 
 */

float loan(int principal, float annualInterestRate, int years);

#endif