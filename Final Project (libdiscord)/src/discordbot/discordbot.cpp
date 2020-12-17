/**
* @file discordbot.cpp
* @brief DiscordBot Function Implemenation
*
* @author Jonathan DeLeon
* @assignment Final Project
* @credits
* @date 12/14/20
*/
#include "discordbot.h"

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