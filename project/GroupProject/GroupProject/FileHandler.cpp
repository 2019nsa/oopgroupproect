#include <fstream>
#include <iostream>
#include <sstream>
#include "FileHandler.h"
#include "User.h"

using namespace std;

string** FileHandler::userFile(int& userCount) {
	ifstream myFile("user.txt");
	if (!myFile)
	{
		cout << ("Error: user.txt not found") << endl;
		system("pause");
		exit(EXIT_FAILURE);
	}
	string info;
	userCount = 0;
	string** User2d = 0;
	User2d = new string*[100];
	while (!myFile.eof()) {
		getline(myFile, info, '|');
		if (info.substr(0, 3) == "VEN" || info.substr(0, 3) == "ROV") {
			User2d[userCount] = new string[5];
			for (int j = 0; j < 5; j++) {
				if (j == 0)
					User2d[userCount][j] = info;
				else if (j >= 1 && j <= 3) {
					getline(myFile, info, '|');
					User2d[userCount][j] = info;
				}
				else if (j > 3) {
					getline(myFile, info);
					User2d[userCount][j] = info;
				}
			}
			userCount++;
		}
		else if (info.substr(0, 3) == "SCT" || info.substr(0, 3) == "SCM") {
			getline(myFile, info);
		}
		getline(myFile, info);
	}
	return User2d;
}

string** FileHandler::scoutFile(int& scoutCount) {
	ifstream myFile("user.txt");
	if (!myFile)
	{
		cout << ("Error: user.txt not found") << endl;
		system("pause");
		exit(EXIT_FAILURE);
	}
	string info;
	scoutCount = 0;
	string** Scout2d = 0;
	Scout2d = new string*[100];
	while (!myFile.eof()) {
		getline(myFile, info, '|');
		if (info.substr(0, 3) == "SCT") {
			Scout2d[scoutCount] = new string[6];
			for (int j = 0; j < 6; j++) {
				if (j == 0)
					Scout2d[scoutCount][j] = info;
				else if (j >= 1 && j <= 4) {
					getline(myFile, info, '|');
					Scout2d[scoutCount][j] = info;
				}
				else if (j > 4) {
					getline(myFile, info);
					Scout2d[scoutCount][j] = info;
				}
			}
			scoutCount++;
		}
		else if (info.substr(0, 3) == "VEN" || info.substr(0, 3) == "ROV") {
			getline(myFile, info);
		}
		else if (info.substr(0, 3) == "SCM") {
			getline(myFile, info);
		}
		getline(myFile, info);
	}
	return Scout2d;
}

string** FileHandler::scouterFile(int& scouterCount) {
	ifstream myFile("user.txt");
	if (!myFile)
	{
		cout << ("Error: user.txt not found") << endl;
		system("pause");
		exit(EXIT_FAILURE);
	}
	string info;
	scouterCount = 0;
	string** Scouter2d = 0;
	Scouter2d = new string*[100];
	while (!myFile.eof()) {
		getline(myFile, info, '|');
		if (info.substr(0, 3) == "SCM") {
			Scouter2d[scouterCount] = new string[6];
			for (int j = 0; j < 6; j++) {
				if (j == 0)
					Scouter2d[scouterCount][j] = info;
				else if (j >= 1 && j <= 4) {
					getline(myFile, info, '|');
					Scouter2d[scouterCount][j] = info;
				}
				else if (j > 4) {
					getline(myFile, info);
					Scouter2d[scouterCount][j] = info;
				}
			}
			scouterCount++;
		}
		else if (info.substr(0, 3) == "VEN" || info.substr(0, 3) == "ROV") {
			getline(myFile, info);
		}
		else if (info.substr(0, 3) == "SCT") {
			getline(myFile, info);
		}
		getline(myFile, info);
	}
	return Scouter2d;
}

string** FileHandler::tentFile(int& tentCount) {
	ifstream myFile("camp_equipment.txt");
	if (!myFile)
	{
		cout << ("Error: user.txt not found") << endl;
		system("pause");
		exit(EXIT_FAILURE);
	}
	string info;
	tentCount = 0;
	string** Tent2d = 0;
	Tent2d = new string*[100];
	while (!myFile.eof()) {
		getline(myFile, info, '|');
		if (info.substr(0, 1) == "T") {
			Tent2d[tentCount] = new string[12];
			for (int j = 0; j < 12; j++) {
				if (j == 0)
					Tent2d[tentCount][j] = info;
				else if (j >= 1 && j <= 10) {
					getline(myFile, info, '|');
					Tent2d[tentCount][j] = info;
				}
				else if (j > 10) {
					getline(myFile, info);
					Tent2d[tentCount][j] = info;
				}
			}
			tentCount++;
		}
		else if (info.substr(0, 1) == "S" || info.substr(0, 1) == "L") {
			getline(myFile, info);
		}
		getline(myFile, info);
	}
	return Tent2d;
}

string** FileHandler::stoveFile(int& stoveCount) {
	ifstream myFile("camp_equipment.txt");
	if (!myFile)
	{
		cout << ("Error: user.txt not found") << endl;
		system("pause");
		exit(EXIT_FAILURE);
	}
	string info;
	stoveCount = 0;
	string** Stove2d = 0;
	Stove2d = new string*[100];
	while (!myFile.eof()) {
		getline(myFile, info, '|');
		if (info.substr(0, 1) == "S") {
			Stove2d[stoveCount] = new string[9];
			for (int j = 0; j < 9; j++) {
				if (j == 0)
					Stove2d[stoveCount][j] = info;
				else if (j >= 1 && j <= 7) {
					getline(myFile, info, '|');
					Stove2d[stoveCount][j] = info;
				}
				else if (j > 7) {
					getline(myFile, info);
					Stove2d[stoveCount][j] = info;
				}
			}
			stoveCount++;
		}
		else if (info.substr(0, 1) == "T" || info.substr(0, 1) == "L") {
			getline(myFile, info);
		}
		getline(myFile, info);
	}
	return Stove2d;
}

string** FileHandler::lanternFile(int& lanternCount) {
	ifstream myFile("camp_equipment.txt");
	if (!myFile)
	{
		cout << ("Error: user.txt not found") << endl;
		system("pause");
		exit(EXIT_FAILURE);
	}
	string info;
	lanternCount = 0;
	string** Lantern2d = 0;
	Lantern2d = new string*[100];
	while (!myFile.eof()) {
		getline(myFile, info, '|');
		if (info.substr(0, 1) == "L") {
			Lantern2d[lanternCount] = new string[10];
			for (int j = 0; j < 10; j++) {
				if (j == 0)
					Lantern2d[lanternCount][j] = info;
				else if (j >= 1 && j <= 8) {
					getline(myFile, info, '|');
					Lantern2d[lanternCount][j] = info;
				}
				else if (j > 8) {
					getline(myFile, info);
					Lantern2d[lanternCount][j] = info;
				}
			}
			lanternCount++;
		}
		else if (info.substr(0, 1) == "T" || info.substr(0, 1) == "S") {
			getline(myFile, info);
		}
		getline(myFile, info);
	}
	return Lantern2d;
}

void FileHandler::readLoanRecord(string userID) {
	ifstream loanRecord("C:\\Users\\s2012\\OneDrive\\Desktop\\People.txt");
	string info;
	if (!loanRecord) {
		cout << "There are no any records." << endl;
	}
	else {
		while (!loanRecord.eof()) {
			getline(loanRecord, info, '|');
			if (info.substr(0, 6) == userID) {
				for (int i = 0; i < 5; i++) {
					if (i > 0 && i < 4) {
						getline(loanRecord, info, '|');
						cout << info << " ";
					}
					else if (i > 3) {
						getline(loanRecord, info);
						cout << info << endl;
					}
				}
			}
			else
				getline(loanRecord, info);
			getline(loanRecord, info);
		}
	}
}

void writeloanrecord() {
	ifstream loanRecord("newFile.txt");
	string info;
	if (!loanRecord) {
		ofstream file("newFile.txt");
	}
}