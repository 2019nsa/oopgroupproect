#include <iostream>
#include <string>
#include "FileHandler.h"
#include "User.h"
#include "Equipment.h"
#include "Admin.h"

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
	Admin admin;
	Scout sct;
	Scouts scts;
	Scouters sctrs;
	Tent ten;
	Stove sto;
	Lantern lan;
	string** LoginSystem = 0;
	LoginSystem = new string*[300];
	int row = 0;
	for (int i = 0; i < sct.getScoutCount(); i++, row++) {
		LoginSystem[row] = new string[3];
		LoginSystem[row][0] = sct.getScout()[i][0];
		LoginSystem[row][1] = sct.getScout()[i][3];
		LoginSystem[row][2] = sct.getScout()[i][1];
	}
	for (int i = 0, j = 0; i < scts.getScoutsCount(); i++, j++, row++) {
		LoginSystem[row] = new string[3];
		LoginSystem[row][0] = scts.getScouts()[j][0];
		LoginSystem[row][1] = scts.getScouts()[j][3];
		LoginSystem[row][2] = scts.getScouts()[j][1];
	}
	for (int i = 0, j = 0; i < sctrs.getScoutersCount(); i++, j++, row++) {
		LoginSystem[row] = new string[3];
		LoginSystem[row][0] = sctrs.getScouters()[j][0];
		LoginSystem[row][1] = sctrs.getScouters()[j][3];
		LoginSystem[row][2] = sctrs.getScouters()[j][1];
	}
	for (int i = 0; i < 1; i++, row++) {
		LoginSystem[row] = new string[3];
		LoginSystem[row][0] = "admin";
		LoginSystem[row][1] = "admin";
		LoginSystem[row][2] = "admin";
	}

	string rightUser = loginSystem(LoginSystem, row);
	system("pause");
	system("cls");

	if (rightUser == "admin")
		admin.adminMenu();
	else if (rightUser.substr(0, 3) == "VEN" || rightUser.substr(0, 3) == "ROV")
		sct.scoutMenu(rightUser);
	else if (rightUser.substr(0, 3) == "SCT")
		scts.scoutsMenu(rightUser);
	else if (rightUser.substr(0, 3) == "SCM")
		sctrs.scoutersMenu(rightUser);

	// Release the memory
	sct.deleteAll();
	scts.deleteAll();
	sctrs.deleteAll();
	ten.deleteAll();
	sto.deleteAll();
	lan.deleteAll();
	for (int i = 0; i < row; i++) {
		delete[] LoginSystem[i];
	}
	delete[] LoginSystem;
	LoginSystem = 0;
	return 0;
}