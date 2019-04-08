#include <iostream>
#include <fstream>
#include <string>
#include "Equipment.h"
#include "User.h"
#include "Admin.h"
#include "FileHandler.h"

using namespace std;
	
bool checkUsername(string** LoginSystem, string username, int row) {
	bool flag = false;
	for (int i = 0; i < row; i++) {
		if (username == LoginSystem[i][0])
			flag = true;
	}
	if (flag == false)
		cout << "Wrong username!" << endl;
	return flag;
}

string findUser(string** LoginSystem, string username, int row) {
	for (int i = 0; i < row; i++) {
		if (username == LoginSystem[i][0])
			return LoginSystem[i][0];
	}
}

bool checkPassword(string** LoginSystem, string rightUser, string password, int row) {
	bool flag = false;
	int passwordOfUser = 0;
	for (int i = 0; i < row; i++) {
		if (rightUser == LoginSystem[i][0]) {
			passwordOfUser = i;
			break;
		}
	}
	if (password == LoginSystem[passwordOfUser][1]) {
		cout << "Wellcome " << LoginSystem[passwordOfUser][2] << " to the system ~" << endl;
		flag = true;
	}
	else
		cout << "Wrong password!" << endl;
	return flag;
}

string loginSystem(string** LoginSystem, int row) {
	bool loop;
	string rightUser = " ";
	do {
		string username;
		system("cls");
		loop = true;
		cout << "Please enter your username:";
		cin >> username;
		bool flag = checkUsername(LoginSystem, username, row);
		if (flag == true) {
			loop = false;
			rightUser = findUser(LoginSystem, username, row);
		}
		else
			system("pause");
	} while (loop);
	do {
		loop = true;
		string password;
		cout << "Please enter your password:";
		cin >> password;
		bool flag = checkPassword(LoginSystem, rightUser, password, row);
		if (flag == true)
			loop = false;
		else {
			system("pause");
			return loginSystem(LoginSystem, row);
		}
	} while (loop);
	return rightUser;
}

int main() {
	FileHandler file;
	int userCount;
	string** user = file.userFile(userCount);
	User us[100];
	for (int i = 0; i < userCount; i++) {
		us[i].setUserID(user[i][0]);
		us[i].setName(user[i][1]);
		us[i].setSection(user[i][2]);
		us[i].setBirth(user[i][3]);
		us[i].setAddress(user[i][4]);
	}

	int scoutCount = 0;
	string** scout = file.scoutFile(scoutCount);
	Scout st[100];
	for (int i = 0; i < scoutCount; i++) {
		st[i].setUserID(scout[i][0]);
		st[i].setName(scout[i][1]);
		st[i].setSection(scout[i][2]);
		st[i].setBirth(scout[i][3]);
		st[i].setAddress(scout[i][4]);
		st[i].setRank(scout[i][5]);
	}

	int scouterCount = 0;
	string** scouter = file.scouterFile(scouterCount);
	Scouter str[100];
	for (int i = 0; i < scouterCount; i++) {
		str[i].setUserID(scout[i][0]);
		str[i].setName(scout[i][1]);
		str[i].setSection(scout[i][2]);
		str[i].setBirth(scout[i][3]);
		str[i].setAddress(scout[i][4]);
		str[i].setRank(scout[i][5]);
	}

	int tentCount = 0;
	string** tent = file.tentFile(tentCount);
	Tent te[100];
	for (int i = 0; i < tentCount; i++) {
		te[i].setItemID(tent[i][0]);
		te[i].setItemName(tent[i][1]);
		te[i].setBrand(tent[i][2]);
		te[i].setItemType(tent[i][3]);
		te[i].setDateOfPurchase(tent[i][4]);
		te[i].setCondition(tent[i][5]);
		te[i].setStatus(tent[i][6]);
		te[i].setTentSize(tent[i][7]);
		te[i].setTentType(tent[i][8]);
		te[i].setNumberOfDoors(tent[i][9]);
		te[i].setDoubleLayer(tent[i][10]);
		te[i].setColour(tent[i][11]);
	}

	int stoveCount = 0;
	string** stove = file.stoveFile(stoveCount);
	Stove stv[100];
	for (int i = 0; i < stoveCount; i++) {
		stv[i].setItemID(stove[i][0]);
		stv[i].setItemName(stove[i][1]);
		stv[i].setBrand(stove[i][2]);
		stv[i].setItemType(stove[i][3]);
		stv[i].setDateOfPurchase(stove[i][4]);
		stv[i].setCondition(stove[i][5]);
		stv[i].setStatus(stove[i][6]);
		stv[i].setStoveType(stove[i][7]);
		stv[i].setFuelType(stove[i][8]);
	}

	int lanternCount = 0;
	string** lantern = file.lanternFile(lanternCount);
	Lantern ln[100];
	for (int i = 0; i < lanternCount; i++) {
		ln[i].setItemID(lantern[i][0]);
		ln[i].setItemName(lantern[i][1]);
		ln[i].setBrand(lantern[i][2]);
		ln[i].setItemType(lantern[i][3]);
		ln[i].setDateOfPurchase(lantern[i][4]);
		ln[i].setCondition(lantern[i][5]);
		ln[i].setStatus(lantern[i][6]);
		ln[i].setLanternSize(lantern[i][7]);
		ln[i].setLanternType(lantern[i][8]);
		ln[i].setFuelType(lantern[i][9]);
	}

	Admin admin;
	string** LoginSystem = 0;
	LoginSystem = new string*[300];

	int row = 0;
	for (int i = 0; i < userCount; i++, row++) {
		LoginSystem[row] = new string[3];
		LoginSystem[row][0] = user[i][0];
		LoginSystem[row][1] = user[i][3];
		LoginSystem[row][2] = user[i][1];
	}
	for (int i = 0, j = 0; i < scoutCount; i++, j++, row++) {
		LoginSystem[row] = new string[3];
		LoginSystem[row][0] = scout[j][0];
		LoginSystem[row][1] = scout[j][3];
		LoginSystem[row][2] = scout[j][1];
	}
	for (int i = 0, j = 0; i < scouterCount; i++, j++, row++) {
		LoginSystem[row] = new string[3];
		LoginSystem[row][0] = scouter[j][0];
		LoginSystem[row][1] = scouter[j][3];
		LoginSystem[row][2] = scouter[j][1];
	}
	for (int i = 0; i < 1; i++, row++) {
		LoginSystem[row] = new string[3];
		LoginSystem[row][0] = admin.getUserID();
		LoginSystem[row][1] = admin.getPassword();
		LoginSystem[row][2] = "admin";
	}
	
	string rightUser = loginSystem(LoginSystem, row);
	system("pause");
	system("cls");
	for (;;) {
		int option = 0;
		int adminOption = 0;
		Admin a;
		User u;
		system("cls");
		if (rightUser == "admin") {
			adminOption = a.adminMenu();
			break;
		}
		else
			option = u.userMenu();

		if (option == 1) {
			system("cls");
			for (int i = 0; i < 10; i++) {
				if (tent[i][5] == "good") {
					for (int j = 0; j < 12; j++) {
						cout << tent[i][j] << " ";
					}
					cout << endl;
				}
			}
			cout << endl;
			for (int i = 0; i < 8; i++) {
				if (stove[i][5] == "good") {
					for (int j = 0; j < 9; j++) {
						cout << stove[i][j] << " ";
					}
					cout << endl;
				}
			}
			cout << endl;
			for (int i = 0; i < 6; i++) {
				if (lantern[i][5] == "good") {
					for (int j = 0; j < 10; j++) {
						cout << lantern[i][j] << " ";
					}
					cout << endl;
				}
			}
			system("pause");
		}
		else if (option == 2)
			option = 2;//
		else if (option == 3)
			option = 2;//
		else if (option == 4)
			option = 2;//
		else if (option == 5) {
			cout << "thank you for using this system." << endl;
			// Hold the command window
			system("pause");
			break;
		}
	}

	// Clean up memory
	for (int i = 0; i < userCount; i++) {
		delete[] user[i];
	}
	delete[] user;
	user = 0;
	for (int i = 0; i < scoutCount; i++) {
		delete[] scout[i];
	}
	delete[] scout;
	scout = 0;
	for (int i = 0; i < scouterCount; i++) {
		delete[] scouter[i];
	}
	delete[] scouter;
	scouter = 0;

	for (int i = 0; i < tentCount; i++) {
		delete[] tent[i];
	}
	delete[] tent;
	tent = 0;
	for (int i = 0; i < stoveCount; i++) {
		delete[] stove[i];
	}
	delete[] stove;
	stove = 0;
	for (int i = 0; i < lanternCount; i++) {
		delete[] lantern[i];
	}
	delete[] lantern;
	lantern = 0;
	
	for (int i = 0; i < row; i++) {
		delete[] LoginSystem[i];
	}
	delete[] LoginSystem;
	LoginSystem = 0;

	return 0;
}