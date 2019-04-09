#ifndef FILEHANDLER_H
#define FILEHANDLER_H
#include <fstream>
#include <string>

using namespace std;

class FileHandler {
public:
	string** userFile(int& userCount);
	string** scoutFile(int& scoutCount);
	string** scouterFile(int& scouterCount);

	string** tentFile(int& tentCount);
	string** stoveFile(int& stoveCount);
	string** lanternFile(int& lanternCount);

	bool readLoanRecord(string rightUser);
	void writeLoanRecord(string* arr, int& borrowCount, int noOfBorrow, string rightUser, string** tent, int tentCount, string** stove, int stoveCount, string** lantern, int lanternCount);
};

#endif