#include "Admin.h"
#include "FileHandler.h"
#include "Equipment.h"
#include "LoanControl.h"

using namespace std;

void Admin::adminMenu() {
		int input;
		cout << "1) Inserting tabulated files containing batches of users and batches of camp equipment.\n";
		cout << "2) Display loan records containing loan date.\n";
		cout << "3) Display list of camp equipment.\n";
		cout << "4) Update condition of equipment.\n";
		cout << "5) Produce a .txt file that contains all updated data such as loan records and equipment lists.\n";
		cout << "6) Exit.\n\n";
		cout << "Enter the number(1 - 6): \n";
		cin >> input;
		if (!cin) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "please input number(1 - 6)";
		}
		switch (input) {
		case 1:
			input1();
			break;
		case 2:
			input2();
			break;
		case 3:
			input3();	//done
			break;
		case 4:
			input4();
			break;
		case 5:
			input5();
			break;
		case 6:
			input6();	//done
			break;
		default:
			cout << "invalid input!";
			system("pause");
			system("cls");
			adminMenu();
		}
}

void Admin::input1() {

}
void Admin::input2() {

}

//Display list of camp equipment
void Admin::input3() {
	system("cls");
	Tent adminTent;
	Stove adminStove;
	Lantern adminLantern;
	cout << "Tent\n";
	for (int i = 0; i < adminTent.getTentCount(); i++) {
		for (int j = 0; j < 12; j++) {
			cout << adminTent.getTent()[i][j];
			if (j < 11) {
				cout << "|";
			}
		}
		cout << endl;
	}
	cout << "\nStove\n";
	for (int i = 0; i < adminLantern.getLanternCount(); i++) {
		for (int j = 0; j < 10; j++) {
			cout << adminLantern.getLantern()[i][j];
			if (j < 9) {
				cout << "|";
			}
		}
		cout << endl;
	}
	cout << "\nLantern\n";
	for (int i = 0; i < adminStove.getStoveCount(); i++) {
		for (int j = 0; j < 9; j++) {
			cout << adminStove.getStove()[i][j];
			if (j < 8) {
				cout << "|";
			}
		}
		cout << endl;
	}
	system("pause");
	system("cls");
	adminMenu();
}

//Update condition of equipment.
void Admin::input4() {
	system("cls");
	Tent adminTent;
	Stove adminStove;
	Lantern adminLantern;
	FileHandler adminF;
	cout << "Tent\n";
	for (int i = 0; i < adminTent.getTentCount(); i++) {
		for (int j = 0; j < 12; j++) {
			cout << adminTent.getTent()[i][j];
			if (j < 11) {
				cout << "|";
			}
		}
		cout << endl;
	}
	cout << "\nStove\n";
	for (int i = 0; i < adminLantern.getLanternCount(); i++) {
		for (int j = 0; j < 10; j++) {
			cout << adminLantern.getLantern()[i][j];
			if (j < 9) {
				cout << "|";
			}
		}
		cout << endl;
	}
	cout << "\nLantern\n";
	for (int i = 0; i < adminStove.getStoveCount(); i++) {
		for (int j = 0; j < 9; j++) {
			cout << adminStove.getStove()[i][j];
			if (j < 8) {
				cout << "|";
			}
		}
		cout << endl;
	}
	cout << "select which equipment condition to update by input Item code\n";
	string item;
	bool flag = false;
	string condition;
	cin >> item;
	for (int i = 0; i < adminTent.getTentCount(); i++) {
		if (item == adminTent.getTent()[i][0]) {
			flag = true;
			cout << "condition of " << adminTent.getTent()[i][0] << " want to change to :";
			cin >> condition;
			adminTent.getTent()[i][5] = condition;
			cout << "condition change : "<<adminTent.getTent()[i][5] << endl;
			adminF.writecondition(adminTent,adminStove,adminLantern);
			cout << "condition change : " << adminTent.getTent()[i][5] << endl;
			system("pause");
			system("cls");
			adminMenu();
		}
	}
	for (int i = 0; i < adminStove.getStoveCount(); i++) {
		if (item == adminStove.getStove()[i][0]) {
			flag = true;
			cout << "condition of " << adminStove.getStove()[i][0] << " want to change to :";
			cin >> condition;
			adminStove.getStove()[i][5] = condition;
			system("pause");
			system("cls");
			adminMenu();
		}
	}
	for (int i = 0; i < adminLantern.getLanternCount(); i++) {
		if (item == adminLantern.getLantern()[i][0]){
			flag = true;
			cout << "condition of " << adminLantern.getLantern()[i][0] << " want to change to :";
			cin >> condition;
			adminLantern.getLantern()[i][5] = condition;
			system("pause");
			system("cls");
			adminMenu();
		}
	}
	if (flag == false) {
		if (item == "exit") {
			system("cls");
			adminMenu();
		}
		else {
			cout << "wrong input please try again!\n";
			system("pause");
			system("cls");
			input4();
		}
	}
}

void Admin::input5() {

}

void Admin::input6() {
	cout << "thank you for using this system." << endl;
	// Hold the command window
	system("pause");

}