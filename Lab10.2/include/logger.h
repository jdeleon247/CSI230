/**
* @file logger.h
* @brief  Lecture 10.2 Sample Code
* handles the declaration of all logging functionality
* @author Jonathan DeLeon
* @assignment Lecture 10.2
* @date 11/17/2020
* @credits Devin Paden
* 
*/

#ifndef LOGGER_H
#define LOGGER_H
#include <string>
#include <fstream>
#include <time.h>
#include <unistd.h>
#include <libgen.h>
#include <stdlib.h>
/**
* @brief creates a discrete syslog message
* @date 11/17/2020
* @return returns a bool indicating if the message was written correctly
* @param msg std::string containing syslog message
* @param programName std::string containing the program name
* @param logFile ofstream reference after validation
*/

bool log(std::string msg, std::string programName, std ::ofstream& logFile);
#endif