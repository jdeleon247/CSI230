/**
* @file util.cpp
* @brief  Week 10, C++ Review and Warmup from CSI140, util implementation file
*
* @author Jonathan DeLeon
* @assignment Lecture 10.1
* @date 10/26/2020
* @credits
* 
*/
#include "util.h"

std::string randomElement(std::vector<std::string> vector) //returns a random element in a vector of strings
{
    int randomIndex = rand() % vector.size();
    return vector[randomIndex];
}

double sum(std::vector<double> doubles) //returns sum of a vector of doubles
{
    double sum = 0;
    for(double d: doubles)
    {
        sum += d;
    }
    return sum;
}
double avg(std::vector<double> doubles) //returns average of a vector of doubles
{
    double avg = 0;
    for(double d: doubles)
    {
        avg += d;
    }
    avg /= doubles.size();
    return avg;
}
double lowest(std::vector<double> doubles) //returns the lowest element in a vector of doubles
{
    double min = doubles[0]; 
    for (int i = 1; i < doubles.size(); i++) 
	{	if (doubles[i] < min) 
			min = doubles[i]; 
    }
	return min; 
}

void camelCase(std::string& multiWord) //modifies string with spaces to camelcase format
{
    int count = 0;

    for (int i = 0; i < multiWord.size(); i++) 
    {
        multiWord[0] = tolower(multiWord[0]);
        if (multiWord[i] == ' ') 
        {
        multiWord[i + 1] = toupper(multiWord[i + 1]);
        }

        // If not space, copy character
        else
        multiWord[count++] = multiWord[i];
    }
    multiWord[count] = '\0';

}