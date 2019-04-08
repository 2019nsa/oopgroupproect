#include <iostream>
#include <fstream>
#include <string>
#include "Equipment.h"
#include "User.h"
#include "Admin.h"
#include "FileHandler.h"
//heLLO
//cls project
//changed oop
using namespace std;

int adminMenu() {
	int option;
	cout << "1) Inserting tabulated files containing batches of users and batches of camp equipment.\n";
	cout << "2) Display loan records containing loan date.\n";
	cout << "3) Display list of camp equipment.\n" ;
	cout << "4) Update condition of equipment.\n" ;
	cout << "5) Produce a .txt file that contains all updated data such as loan records and equipment lists.\n";
	cout << "6) Exit.\n" ;
	cout << "Enter the number(1 - 6): \n";
	cin >> option;
	return option;
}

int menu() {
	int option = 0;
	cout << "1) Display the available camp equipment." << endl;
	cout << "2) Display my loan record." << endl;
	cout << "3) Equipment loan. (For users who have not borrowed any items)" << endl;
	cout << "4) Returning camp equipment." << endl;
	cout << "5) Exit." << endl;
	cout << endl;
	cout << "Enter the number(1 - 5): ";
	cin >> option;
	return option;
}
	
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
		int j = 0;
		us[i].setUserID(user[i][j]);
		j++;
		us[i].setName(user[i][j]);
		j++;
		us[i].setSection(user[i][j]);
		j++;
		us[i].setBirth(user[i][j]);
		j++;
		us[i].setAddress(user[i][j]);
	}

	int scoutCount;
	string** scout = file.scoutFile(scoutCount);
	Scout st[100];
	for (int i = 0; i < scoutCount; i++) {
		int j = 0;
		st[i].setUserID(scout[i][j]);
		j++;
		st[i].setName(scout[i][j]);
		j++;
		st[i].setSection(scout[i][j]);
		j++;
		st[i].setBirth(scout[i][j]);
		j++;
		st[i].setAddress(scout[i][j]);
		j++;
		st[i].setRank(scout[i][j]);
	}

	int scouterCount;
	string** scouter = file.scouterFile(scouterCount);
	Scouter str[100];
	for (int i = 0; i < scouterCount; i++) {
		int j = 0;
		str[i].setUserID(scout[i][j]);
		j++;
		str[i].setName(scout[i][j]);
		j++;
		str[i].setSection(scout[i][j]);
		j++;
		str[i].setBirth(scout[i][j]);
		j++;
		str[i].setAddress(scout[i][j]);
		j++;
		str[i].setRank(scout[i][j]);
	}

	int tentCount;
	string** tent = file.tentFile(tentCount);
	Tent te[100];
	for (int i = 0; i < tentCount; i++) {
		int j = 0;
		te[i].setItemID(tent[i][j]);
		j++;
		te[i].setItemName(tent[i][j]);
		j++;
		te[i].setBrand(tent[i][j]);
		j++;
		te[i].setItemType(tent[i][j]);
		j++;
		te[i].setDateOfPurchase(tent[i][j]);
		j++;
		te[i].setCondition(tent[i][j]);
		j++;
		te[i].setStatus(tent[i][j]);
		j++;
		te[i].setTentSize(tent[i][j]);
		j++;
		te[i].setTentType(tent[i][j]);
		j++;
		te[i].setNumberOfDoors(tent[i][j]);
		j++;
		te[i].setDoubleLayer(tent[i][j]);
		j++;
		te[i].setColour(tent[i][j]);
	}

	int stoveCount;
	string** stove = file.stoveFile(stoveCount);
	Stove stv[100];
	for (int i = 0; i < stoveCount; i++) {
		int j = 0;
		stv[i].setItemID(stove[i][j]);
		j++;
		stv[i].setItemName(stove[i][j]);
		j++;
		stv[i].setBrand(stove[i][j]);
		j++;
		stv[i].setItemType(stove[i][j]);
		j++;
		stv[i].setDateOfPurchase(stove[i][j]);
		j++;
		stv[i].setCondition(stove[i][j]);
		j++;
		stv[i].setStatus(stove[i][j]);
		j++;
		stv[i].setStoveType(stove[i][j]);
		j++;
		stv[i].setFuelType(stove[i][j]);
	}
	
	int lanternCount;
	string** lantern = file.lanternFile(lanternCount);
	Lantern ln[100];
	for (int i = 0; i < lanternCount; i++) {
		int j = 0;
		ln[i].setItemID(lantern[i][j]);
		j++;
		ln[i].setItemName(lantern[i][j]);
		j++;
		ln[i].setBrand(lantern[i][j]);
		j++;
		ln[i].setItemType(lantern[i][j]);
		j++;
		ln[i].setDateOfPurchase(lantern[i][j]);
		j++;
		ln[i].setCondition(lantern[i][j]);
		j++;
		ln[i].setStatus(lantern[i][j]);
		j++;
		ln[i].setLanternSize(lantern[i][j]);
		j++;
		ln[i].setLanternType(lantern[i][j]);
		j++;
		ln[i].setFuelType(lantern[i][j]);
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
		system("cls");
		if (rightUser == "admin") {
			adminOption = adminMenu();
			break;
		}
		else
			option = menu();

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