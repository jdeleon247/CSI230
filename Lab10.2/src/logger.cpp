/**
* @file logger.cpp
* @brief  Lecture 10.2 Sample Code
* handles all logging functionality
* @author Jonathan DeLeon
* @assignment Lecture 10.2
* @date 11/17/2020
* @credits Devin Paden
* 
*/
#include "logger.h"

bool log(std::string msg, std::string programName, std ::ofstream& logFile)
{
    std::string strTime;
    time_t logTime = time(0);
    strTime = ctime(&logTime);

    int timeSize = strTime.size();
    if(timeSize)
    {
        strTime[timeSize -1] = ' ';
    }
    
    pid_t pid = getpid();
    std::string strHostName;
    char hostname[1024];
    gethostname(hostname, 1024);
    strHostName = hostname;
    
    if(logFile)
    {
        logFile << strTime << strHostName << " " << programName <<  "[" << pid << "]: " << msg << std::endl;
        return true;
    }
    else
    {
        return false;
    }

}