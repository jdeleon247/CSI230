/**
* @file prime_driver.cpp
* @brief Prime Library Driver
*
* @author Jonathan DeLeon
* @assignment Lecture 12.1
* @credits 
* @date 11/30/20
* 
*/
#include "prime.h"
#include <iostream>

using namespace std;
int main()
{
    while (1)
    {
        int num;
        cin >> num;
        
        if (isPrime(num))
        {
            cout << "Number is prime" << endl;
        }
        else 
        {
            cout << "Number is not prime" << endl;
        }
    }
    return 0;
}