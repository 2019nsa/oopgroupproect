#include <fstream>
#include <iostream>
#include <sstream>
#include <ctime>
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

bool FileHandler::readLoanRecord(string userID) {
	ifstream loanRecord("C:\\Users\\s2012\\OneDrive\\Desktop\\People.txt");
	string info;
	bool flag = true;
	if (!loanRecord) {
		cout << "There are no any records." << endl;
	}
	else {
		cout << "Your loan record: " << endl;
		cout << "loan date\titemID\titem name\t\treturn date" << endl;
		while (!loanRecord.eof()) {
			getline(loanRecord, info, '|');
			if (info.substr(0, 6) == userID) {
				for (int i = 0; i < 5; i++) {
					if (i > 0 && i < 4) {
						getline(loanRecord, info, '|');
						cout << info << "\t";
					}
					else if (i > 3) {
						cout << "\t";
						getline(loanRecord, info);
						cout << info << endl;
					}
				}
				flag = false;
			}
			else
				getline(loanRecord, info);
			getline(loanRecord, info);
		}
	}
	return flag;
}

void FileHandler::writeLoanRecord(string* arr, int& borrowCount, int noOfBorrow, string rightUser, string** tent, int tentCount, string** stove, int stoveCount, string** lantern, int lanternCount) {
	ifstream loanRecord("C:\\Users\\s2012\\OneDrive\\Desktop\\People.txt");
	string info;
	if (!loanRecord) {
		ofstream file("C:\\Users\\s2012\\OneDrive\\Desktop\\People.txt");
	}
	else {
		int dayOfToday, monthOfToday, yearOfToday, x, dayOfReturn, monthOfReturn, yearOfReturn;

		struct tm t;
		time_t now;
		time(&now);
		localtime_s(&t, &now);
		dayOfToday = t.tm_mday;
		monthOfToday = t.tm_mon + 1;
		yearOfToday = t.tm_year + 1900;

		int MaxDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		//leap year
		if ((yearOfToday % 4 == 0 && yearOfToday % 100 != 0) || (yearOfToday % 4 == 0 && yearOfToday % 100 == 0 && yearOfToday % 400 == 0))
			MaxDays[1] = 29;
		x = monthOfToday - 1;

		dayOfReturn = dayOfToday + 14, monthOfReturn = monthOfToday, yearOfReturn = yearOfToday; //Usually

		if (dayOfToday + 14 > MaxDays[x]) {
			dayOfReturn = dayOfToday + 14 - MaxDays[x], monthOfReturn = monthOfToday + 1;
			if (monthOfToday == 12) {
				yearOfReturn = yearOfToday + 1;
				monthOfReturn = 1;
			}
		}
		string date, day, month;
		string newDate, newDay, newMonth;
		if (dayOfToday > 0 && dayOfToday < 10)
			day = "0" + to_string(dayOfToday);
		else
			day = to_string(dayOfToday);
		if (monthOfToday > 0 && monthOfToday < 10)
			month = "0" + to_string(monthOfToday);
		else
			month = to_string(monthOfToday);
		if (dayOfReturn > 0 && dayOfReturn < 10)
			newDay = "0" + to_string(dayOfReturn);
		else
			newDay = to_string(dayOfReturn);
		if (monthOfReturn > 0 && monthOfReturn < 10)
			newMonth = "0" + to_string(monthOfReturn);
		else
			newMonth = to_string(monthOfReturn);
		date = day + "/" + month + "/" + to_string(yearOfToday);
		newDate = newDay + "/" + newMonth + "/" + to_string(yearOfReturn);

		string info;
		borrowCount = 0;
		string** borrow2d = 0;
		borrow2d = new string*[100];
		while (!loanRecord.eof()) {
			getline(loanRecord, info, '|');
			borrow2d[borrowCount] = new string[5];
			for (int j = 0; j < 5; j++) {
				if (j == 0)
					borrow2d[borrowCount][j] = info;
				else if (j > 0 && j < 4) {
					getline(loanRecord, info, '|');
					borrow2d[borrowCount][j] = info;
				}
				else if (j > 3) {
					getline(loanRecord, info);
					borrow2d[borrowCount][j] = info;
				}
			}
			borrowCount++;
			getline(loanRecord, info);
		}
		for (int i = 0; i < noOfBorrow; i++) {
			borrow2d[borrowCount] = new string[5];
			borrow2d[borrowCount][0] = rightUser;
			borrow2d[borrowCount][1] = date;//Current Date
			borrow2d[borrowCount][2] = arr[i];
			if (arr[i].substr(0, 1) == "T") {
				for (int k = 0; k < tentCount; k++) {
					if (arr[i] == tent[k][0])
						borrow2d[borrowCount][3] = tent[k][1];
				}
			}
			else if (arr[i].substr(0, 1) == "S") {
				for (int k = 0; k < stoveCount; k++) {
					if (arr[i] == stove[k][0])
						borrow2d[borrowCount][3] = stove[k][1];
				}
			}
			else if (arr[i].substr(0, 1) == "L") {
				for (int k = 0; k < lanternCount; k++) {
					if (arr[i] == lantern[k][0])
						borrow2d[borrowCount][3] = lantern[k][1];
				}
			}
			borrow2d[borrowCount][4] = newDate;//return Date
			borrowCount++;
		}
		for (int i = 0; i < borrowCount; i++) {
			for (int j = 0; j < 5; j++) {
				cout << borrow2d[i][j] << " ";
			}
			cout << endl;
		}



	}
}