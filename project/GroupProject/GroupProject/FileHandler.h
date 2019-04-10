#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <fstream>
#include <string>
#include <iostream>

using namespace std;

class FileHandler {
public:
	string** scoutFile(int& scoutCount);
	string** scoutsFile(int& scoutsCount);
	string** scoutersFile(int& scoutersCount);
};

#endif