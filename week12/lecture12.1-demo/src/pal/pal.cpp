/**
* @file pal.cpp
* @brief  Palindrome Implemenation
*
* @author Jonathan DeLeon
* @assignment Lecture 10.1
* @date 10/26/2020
* @credits written by: https://www.fayewilliams.com/2015/07/07/creating-a-shared-library/
* 
*/
#include "pal.h"
#include <string.h>

bool isPalindrome(char *word)
{
    bool ret = true;

    char *p = word;
    int len = strlen(word);
    char *q = &word[len - 1];
    for (int i = 0; i < len; ++i, ++p, --q)
    {
        if (*p != *q)
        {
            ret = false;
        }
    }

    return ret;
}