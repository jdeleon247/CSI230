/**
* @file prime.cpp
* @brief  Prime Check Implemenation
*
* @author Jonathan DeLeon
* @assignment Lecture 10.1
* @date 10/26/2020
* @credits
* 
*/
#include "prime.h"

bool isPrime(int num)
{
    bool isPrime = true;

    // 0 and 1 are not prime numbers
    if (num == 0 || num == 1) 
    {
        isPrime = false;
    }
    else 
    {
        for (int i = 2; i <= num / 2; ++i) 
        {
            if (num% i == 0) 
            {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}