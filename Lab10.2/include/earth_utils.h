/**
* @file earth_utils.h
* @brief  Lecture 10.2 Sample Code
* handles parsing a lat/long csv file and conversion into kml formal
* @author Jonathan DeLeon
* @assignment Lecture 10.2
* @date 11/17/2020
* @credits Devin Paden
* 
*/
#ifndef EARTH_UTILS_H
#define EARTH_UTILS_H
#include <string>
#include <fstream>

const std::string KMLHEADER1 = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>";
const std::string KMLHEADER2 = "<kml xmlns=\"http://www.opengis.net/kml/2.2\">";
const std::string KMLFOOTER = "</kml>";
const std::string KMLDOCSTART = "<Document>";
const std::string KMLDOCEND = "</Document>";

/**
* @brief process a country capital csv file
* @date 11/17/2020
* @return returns the number of records processed
* @param inFile ifstream to an open, valid csv file
* @param kmlFileName std::string containing the name of the kml output file
* @param logFile ofstream reference after validation
*/
int processCSV(std::ifstream& inFile, std::string kmlFileName);

/**
* @brief Writes a placemark record into a kmlFile
* @date 11/17/2020
* @param name representing concatenated Capital and Country
* @param latitude string representing latitude
* @param longitude string representing longitude
* @param elevation string representing elevatuion, default 0
*/
void writePlacemark(std::ofstream& kmlFile, std::string name, std::string latitude, std::string longitude);

#endif

