/**
* @file earth_utils.cpp
* @brief  Lecture 10.2 Sample Code
* implementation of parsing a lat/long csv file and conversion into kml formal
* @author Jonathan DeLeon
* @assignment Lecture 10.2
* @date 11/17/2020
* @credits Devin Paden
* 
*/

#include "earth_utils.h"
#include <iostream>
#include <sstream>
/**
* @brief process a country capital csv file
* @date 11/17/2020
* @return returns the number of records processed
* @param inFile ifstream to an open, valid csv file
* @param kmlFileName std::string containing the name of the kml output file
* @param logFile ofstream reference after validation
*/
int processCSV(std::ifstream& inFile, std::string kmlFileName)
{
    std::string strCountry, strCapital, strLat, strLong;
    std::string strLine;
    int recordCount{};
    if(inFile)
    {
        getline(inFile,strLine);
        std::ofstream outputKML;
        outputKML.open(kmlFileName,std::ios_base::app);
        outputKML << KMLHEADER1 << std::endl << KMLHEADER2 << std::endl << KMLDOCSTART << std::endl;
        while(getline(inFile,strLine))
        {
            std::stringstream s_stream(strLine);
            std::getline(s_stream, strCountry, ',');
            std::getline(s_stream, strCapital, ',');
            std::getline(s_stream, strLat, ',');
            std::getline(s_stream, strLong, ',');
            strCapital += (',' + strCountry);
            writePlacemark(outputKML, strCapital, strLat, strLong);
            recordCount++;
        }
        outputKML << KMLDOCEND << std::endl << KMLFOOTER;
        outputKML.close();
    }
    return recordCount;
}
/**
* @brief Writes a placemark record into a kmlFile
* @date 11/17/2020
* @param name representing concatenated Capital and Country
* @param latitude string representing latitude
* @param longitude string representing longitude
* @param elevation string representing elevatuion, default 0
*/
void writePlacemark(std::ofstream& kmlFile, std::string name, std::string latitude, std::string longitude)
{
    kmlFile << "<Placemark>\n" << "<name>" << name << "</name>\n" << "<Point>" << "<coordinates>" << latitude << ',' << longitude << "</coordinates>" << "</Point>\n" << "</Placemark>\n";
}