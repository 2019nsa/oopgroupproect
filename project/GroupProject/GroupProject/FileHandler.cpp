#include "FileHandler.h"
#include "Equipment.h"

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
		if (info.substr(0, 3) == "VEN" || info.substr(0, 3) == "ROV") {
			Scout2d[scoutCount] = new string[5];
			for (int j = 0; j < 5; j++) {
				if (j == 0)
					Scout2d[scoutCount][j] = info;
				else if (j >= 1 && j <= 3) {
					getline(myFile, info, '|');
					Scout2d[scoutCount][j] = info;
				}
				else if (j > 3) {
					getline(myFile, info);
					Scout2d[scoutCount][j] = info;
				}
			}
			scoutCount++;
		}
		else if (info.substr(0, 3) == "SCT" || info.substr(0, 3) == "SCM") {
			getline(myFile, info);
		}
		getline(myFile, info);
	}
	return Scout2d;
}

string** FileHandler::scoutsFile(int& scoutsCount) {
	ifstream myFile("user.txt");
	if (!myFile)
	{
		cout << ("Error: user.txt not found") << endl;
		system("pause");
		exit(EXIT_FAILURE);
	}
	string info;
	scoutsCount = 0;
	string** Scouts2d = 0;
	Scouts2d = new string*[100];
	while (!myFile.eof()) {
		getline(myFile, info, '|');
		if (info.substr(0, 3) == "SCT") {
			Scouts2d[scoutsCount] = new string[6];
			for (int j = 0; j < 6; j++) {
				if (j == 0)
					Scouts2d[scoutsCount][j] = info;
				else if (j >= 1 && j <= 4) {
					getline(myFile, info, '|');
					Scouts2d[scoutsCount][j] = info;
				}
				else if (j > 4) {
					getline(myFile, info);
					Scouts2d[scoutsCount][j] = info;
				}
			}
			scoutsCount++;
		}
		else if (info.substr(0, 3) == "VEN" || info.substr(0, 3) == "ROV") {
			getline(myFile, info);
		}
		else if (info.substr(0, 3) == "SCM") {
			getline(myFile, info);
		}
		getline(myFile, info);
	}
	return Scouts2d;
}

string** FileHandler::scoutersFile(int& scoutersCount) {
	ifstream myFile("user.txt");
	if (!myFile)
	{
		cout << ("Error: user.txt not found") << endl;
		system("pause");
		exit(EXIT_FAILURE);
	}
	string info;
	scoutersCount = 0;
	string** Scouters2d = 0;
	Scouters2d = new string*[100];
	while (!myFile.eof()) {
		getline(myFile, info, '|');
		if (info.substr(0, 3) == "SCM") {
			Scouters2d[scoutersCount] = new string[6];
			for (int j = 0; j < 6; j++) {
				if (j == 0)
					Scouters2d[scoutersCount][j] = info;
				else if (j >= 1 && j <= 4) {
					getline(myFile, info, '|');
					Scouters2d[scoutersCount][j] = info;
				}
				else if (j > 4) {
					getline(myFile, info);
					Scouters2d[scoutersCount][j] = info;
				}
			}
			scoutersCount++;
		}
		else if (info.substr(0, 3) == "VEN" || info.substr(0, 3) == "ROV") {
			getline(myFile, info);
		}
		else if (info.substr(0, 3) == "SCT") {
			getline(myFile, info);
		}
		getline(myFile, info);
	}
	return Scouters2d;
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

bool FileHandler::readLoanRecord(string rightUser) {
	ifstream loanRecord("C:\\Users\\s2012\\OneDrive\\Desktop\\People.txt");
	string info;
	int recordCount = 0;
	string** record2d = 0;
	record2d = new string*[100];
	bool flag = true;
	if (!loanRecord) {
		cout << "There are no any records." << endl;
	}
	else {
		cout << "Your loan record: " << endl;
		cout << "loan date\titemID\titem name\t\treturn date" << endl;
		while (!loanRecord.eof()) {
			getline(loanRecord, info, '|');
			record2d[recordCount] = new string[6];
			for (int j = 0; j < 6; j++) {
				if (j == 0)
					record2d[recordCount][j] = info;
				else if (j >= 1 && j <= 4) {
					getline(loanRecord, info, '|');
					record2d[recordCount][j] = info;
				}
				else if (j > 4) {
					getline(loanRecord, info);
					record2d[recordCount][j] = info;
				}
			}
			getline(loanRecord, info);
			recordCount++;
		}
		for (int i = 0; i < recordCount; i++) {
			if (record2d[i][0] == rightUser && record2d[i][5] == "out") {
				for (int j = 1; j < 5; j++) {
					if (j < 3)
						cout << record2d[i][j] << "\t";
					else if (j == 3)
						cout << record2d[i][j] << "\t\t";
					else if (j > 3)
						cout << record2d[i][j] << endl;
				}
				flag = false;
			}
		}
	}
	return flag;
}

void FileHandler::writeLoanRecord(string* arr, int& borrowCount, int noOfBorrow, string rightUser) {
	ifstream loanRecord("C:\\Users\\s2012\\OneDrive\\Desktop\\People.txt");
	string info;
	Tent ten;
	Stove sto;
	Lantern lan;
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
			borrow2d[borrowCount] = new string[6];
			for (int j = 0; j < 6; j++) {
				if (j == 0)
					borrow2d[borrowCount][j] = info;
				else if (j > 0 && j <= 4) {
					getline(loanRecord, info, '|');
					borrow2d[borrowCount][j] = info;
				}
				else if (j > 4) {
					getline(loanRecord, info);
					borrow2d[borrowCount][j] = info;
				}
			}
			borrowCount++;
			getline(loanRecord, info);
		}
		for (int i = 0; i < noOfBorrow; i++) {
			borrow2d[borrowCount] = new string[6];
			borrow2d[borrowCount][0] = rightUser;
			borrow2d[borrowCount][1] = date;//Current Date
			borrow2d[borrowCount][2] = arr[i];
			if (arr[i].substr(0, 1) == "T") {
				for (int k = 0; k < ten.getTentCount(); k++) {
					if (arr[i] == ten.getTent()[k][0]) {
						borrow2d[borrowCount][3] = ten.getTent()[k][1];
						ten.getTent()[k][6] = "out";
					}
				}
			}
			else if (arr[i].substr(0, 1) == "S") {
				for (int k = 0; k < sto.getStoveCount(); k++) {
					if (arr[i] == sto.getStove()[k][0]) {
						borrow2d[borrowCount][3] = sto.getStove()[k][1];
						sto.getStove()[k][6] = "out";
					}
				}
			}
			else if (arr[i].substr(0, 1) == "L") {
				for (int k = 0; k < lan.getLanternCount(); k++) {
					if (arr[i] == lan.getLantern()[k][0]) {
						borrow2d[borrowCount][3] = lan.getLantern()[k][1];
						lan.getLantern()[k][6] = "out";
					}
				}
			}
			borrow2d[borrowCount][4] = newDate;//return Date
			borrow2d[borrowCount][5] = "out";
			borrowCount++;
		}
		loanRecord.open("C:\\Users\\s2012\\OneDrive\\Desktop\\People.txt", ofstream::out | ofstream::trunc);
		loanRecord.close();
		ofstream newLoanRecord("C:\\Users\\s2012\\OneDrive\\Desktop\\People.txt");
		if (newLoanRecord.is_open())
		{
			for (int i = 0; i < borrowCount; i++) {
				if (i < borrowCount - 1) {
					for (int j = 0; j < 6; j++) {
						if (j != 5)
							newLoanRecord << borrow2d[i][j] << "|";
						else
							newLoanRecord << borrow2d[i][j];
					}
					newLoanRecord << "\n\n";
				}
				else if (i == borrowCount - 1) {
					for (int j = 0; j < 6; j++) {
						if (j != 5)
							newLoanRecord << borrow2d[i][j] << "|";
						else
							newLoanRecord << borrow2d[i][j];
					}
				}
			}
			newLoanRecord.close();
		}
		else
			cout << "Unable to open file";
		ifstream equipment;
		equipment.open("C:\\Users\\s2012\\OneDrive\\Desktop\\name.txt", ofstream::out | ofstream::trunc);
		equipment.close();
		ofstream newEquipment("C:\\Users\\s2012\\OneDrive\\Desktop\\name.txt");
		if (newEquipment.is_open())
		{
			for (int i = 0; i < ten.getTentCount(); i++) {
				for (int j = 0; j < 12; j++) {
					if (j != 11)
						newEquipment << ten.getTent()[i][j] << "|";
					else
						newEquipment << ten.getTent()[i][j];
				}
				newEquipment << "\n\n";
			}
			for (int i = 0; i < sto.getStoveCount(); i++) {
				for (int j = 0; j < 9; j++) {
					if (j != 8)
						newEquipment << sto.getStove()[i][j] << "|";
					else
						newEquipment << sto.getStove()[i][j];
				}
				newEquipment << "\n\n";
			}
			for (int i = 0; i < lan.getLanternCount(); i++) {
				for (int j = 0; j < 10; j++) {
					if (j != 9)
						newEquipment << lan.getLantern()[i][j] << "|";
					else
						newEquipment << lan.getLantern()[i][j];
				}
				newEquipment << "\n\n";
			}
			newEquipment.close();
		}
		else
			cout << "Unable to open file";
		for (int i = 0; i < borrowCount; i++) {
			delete[] borrow2d[i];
		}
		delete[] borrow2d;
		borrow2d = 0;
	}
}

void FileHandler::updateLoanRecord(string rightUser) {
	ifstream loanRecord("C:\\Users\\s2012\\OneDrive\\Desktop\\People.txt");
	string info;
	string update;
	int recordCount = 0;
	string** record2d = 0;
	record2d = new string*[100];
	bool flag = true;
	if (!loanRecord) {
		cout << "There are no any records." << endl;
	}
	else {
		cout << "Your loan record: " << endl;
		cout << "loan date\titemID\titem name\t\treturn date" << endl;
		while (!loanRecord.eof()) {
			getline(loanRecord, info, '|');
			record2d[recordCount] = new string[6];
			for (int j = 0; j < 6; j++) {
				if (j == 0)
					record2d[recordCount][j] = info;
				else if (j >= 1 && j <= 4) {
					getline(loanRecord, info, '|');
					record2d[recordCount][j] = info;
				}
				else if (j > 4) {
					getline(loanRecord, info);
					record2d[recordCount][j] = info;
				}
			}
			getline(loanRecord, info);
			recordCount++;
		}
		for (int i = 0; i < recordCount; i++) {
			if (record2d[i][0] == rightUser && record2d[i][5] == "out") {
				for (int j = 1; j < 5; j++) {
					if (j < 3)
						cout << record2d[i][j] << "\t";
					else if (j == 3)
						cout << record2d[i][j] << "\t\t";
					else if (j > 3)
						cout << record2d[i][j] << endl;
				}
			}
		}
		cout << endl;
		cout << "Which item you would like to return? ";
		cin >> update;
		for (int i = 0; i < recordCount; i++) {
			if (record2d[i][0] == rightUser && record2d[i][5] == "out" && update == record2d[i][2]) {
				record2d[i][5] = "returned";
				flag = true;
				break;
			}
			else
				flag = false;
		}
		if (flag == true) {
			loanRecord.open("C:\\Users\\s2012\\OneDrive\\Desktop\\People.txt", ofstream::out | ofstream::trunc);
			loanRecord.close();
			ofstream newLoanRecord("C:\\Users\\s2012\\OneDrive\\Desktop\\People.txt");
			if (newLoanRecord.is_open())
			{
				for (int i = 0; i < recordCount; i++) {
					if (i < recordCount - 1) {
						for (int j = 0; j < 6; j++) {
							if (j != 5)
								newLoanRecord << record2d[i][j] << "|";
							else
								newLoanRecord << record2d[i][j];
						}
						newLoanRecord << "\n\n";
					}
					else if (i == recordCount - 1) {
						for (int j = 0; j < 6; j++) {
							if (j != 5)
								newLoanRecord << record2d[i][j] << "|";
							else
								newLoanRecord << record2d[i][j];
						}
					}
				}
				newLoanRecord.close();
			}
			Tent ten;
			Stove sto;
			Lantern lan;
			for (int i = 0; i < ten.getTentCount(); i++) {
				if (update == ten.getTent()[i][0]) {
					ten.getTent()[i][6] = "in";
				}
			}
			for (int i = 0; i < sto.getStoveCount(); i++) {
				if (update == sto.getStove()[i][0]) {
					sto.getStove()[i][6] = "in";
				}
			}
			for (int i = 0; i < lan.getLanternCount(); i++) {
				if (update == lan.getLantern()[i][0]) {
					lan.getLantern()[i][6] = "in";
				}
			}
			ifstream equipment;
			equipment.open("C:\\Users\\s2012\\OneDrive\\Desktop\\name.txt", ofstream::out | ofstream::trunc);
			equipment.close();
			ofstream newEquipment("C:\\Users\\s2012\\OneDrive\\Desktop\\name.txt");
			if (newEquipment.is_open())
			{
				for (int i = 0; i < ten.getTentCount(); i++) {
					for (int j = 0; j < 12; j++) {
						if (j != 11)
							newEquipment << ten.getTent()[i][j] << "|";
						else
							newEquipment << ten.getTent()[i][j];
					}
					newEquipment << "\n\n";
				}
				for (int i = 0; i < sto.getStoveCount(); i++) {
					for (int j = 0; j < 9; j++) {
						if (j != 8)
							newEquipment << sto.getStove()[i][j] << "|";
						else
							newEquipment << sto.getStove()[i][j];
					}
					newEquipment << "\n\n";
				}
				for (int i = 0; i < lan.getLanternCount(); i++) {
					for (int j = 0; j < 10; j++) {
						if (j != 9)
							newEquipment << lan.getLantern()[i][j] << "|";
						else
							newEquipment << lan.getLantern()[i][j];
					}
					newEquipment << "\n\n";
				}
				newEquipment.close();
			}
			cout << "success!" << endl;
		}
		else
			cout << "No this item!" << endl;
		for (int i = 0; i < recordCount; i++) {
			delete[] record2d[i];
		}
		delete[] record2d;
		record2d = 0;
	}
}

void FileHandler::writecondition(Tent adminTent, Stove adminStove, Lantern adminLantern){
	system("pause");
	ofstream file;
	file.open("camp_equipment.txt",ofstream::trunc);
	file.close();
	file.open("camp_equipment.txt",ofstream::out);
	if (file.is_open()) {
		for (int i = 0; i < adminTent.getTentCount(); i++) {
			for (int j = 0; j < 12; j++) {
				file << adminTent.getTent()[i][j];
				if (j < 11) {
					file << "|";
				}
			}
			file << "\n\n";
		}
		for (int i = 0; i < adminLantern.getLanternCount(); i++) {
			for (int j = 0; j < 10; j++) {
				file << adminLantern.getLantern()[i][j];
				if (j < 9) {
					file << "|";
				}
			}
			file << "\n\n";
		}
		for (int i = 0; i < adminStove.getStoveCount(); i++) {
			for (int j = 0; j < 9; j++) {
				file << adminStove.getStove()[i][j];
				if (j < 8) {
					file << "|";
				}
			}
			file << "\n\n";
		}
		file.close();
	}
	else
		cout << "file cannot open!";
}