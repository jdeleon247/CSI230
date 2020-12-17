/**
* @file week10.cpp
* @brief  Week 10, C++ Review and Warmup from CSI140
*
* @author Jonathan DeLeon
* @assignment Lecture 10.1
* @date 10/26/2020
* @credits
* 
*/

#include <iostream>
#include <vector>
#include "util.h"
using namespace std;
int main()
{
    srand(time(NULL));

    vector<string> strVec;
    strVec.push_back("Luke");
    strVec.push_back("Han");
    strVec.push_back("Chewbacca");
    strVec.push_back("C3PO");
    strVec.push_back("R2D2");

    cout << randomElement(strVec) << endl;

    vector<double> doubleVec;
    doubleVec.push_back(78.5);
    doubleVec.push_back(55.7);
    doubleVec.push_back(44.3);
    doubleVec.push_back(99.9);
    doubleVec.push_back(96.7);

    cout << sum(doubleVec) << endl;
    cout << avg(doubleVec) << endl;
    cout << lowest(doubleVec) << endl;

    string multiWord = "A little bird with a yellow bill";
    camelCase(multiWord);
    cout << multiWord << endl;

    return EXIT_SUCCESS;
}