/**
* @file pal_driver.cpp
* @brief Palindrome Library Driver
*
* @author Jonathan DeLeon
* @assignment Lecture 12.1
* @credits written by: https://www.fayewilliams.com/2015/07/07/creating-a-shared-library/
* @date 11/30/20
* 
*/
#include "pal.h"
#include <iostream>

using namespace std;
int main()
{
    while (1)
    {
        char buffer[64] = {0};
        cin >> buffer;
        
        if (isPalindrome(buffer))
        {
            cout << "Word is a palindrome" << endl;
        }
        else 
        {
            cout << "Word is not a palindrome" << endl;
        }
    }
    return 0;
}