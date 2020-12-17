/**
* @file util.h
* @brief  Week 10, C++ Review and Warmup from CSI140, function definition and includes header file
*
* @author Jonathan DeLeon
* @assignment Lecture 10.1
* @date 10/26/2020
* @credits
* 
*/
#ifndef UTIL_H
#define UTIL_H
#include <vector>
#include <random>
#include <time.h>
#include <string>
std::string randomElement(std::vector<std::string>);
double sum(std::vector<double>);
double avg(std::vector<double>);
double lowest(std::vector<double>);
void camelCase(std::string&);
#endif