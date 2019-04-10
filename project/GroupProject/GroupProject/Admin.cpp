#include "Admin.h"
#include "FileHandler.h"
#include "Equipment.h"
#include "LoanControl.h"
using namespace std;

void Admin::adminMenu() {
	int input = 0;
	while (input != 6) {
		cout << "1) Inserting tabulated files containing batches of users and batches of camp equipment.\n";
		cout << "2) Display loan records containing loan date.\n";
		cout << "3) Display list of camp equipment.\n";
		cout << "4) Update condition of equipment.\n";
		cout << "5) Produce a .txt file that contains all updated data such as loan records and equipment lists.\n";
		cout << "6) Exit.\n\n";
		cout << "Enter the number(1 - 6): \n";
		cin >> input;
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
			break;
		}
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
}

void Admin::input4() {

}

void Admin::input5() {

}

void Admin::input6() {
	cout << "thank you for using this system." << endl;
	// Hold the command window
	system("pause");
}