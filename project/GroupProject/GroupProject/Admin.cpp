#include "Admin.h"
#include "FileHandler.h"
#include <iostream>

using namespace std;


void Admin::adminMenu() {
	int option = 0;
	cout << "1) Inserting tabulated files containing batches of users and batches of camp equipment.\n";
	cout << "2) Display loan records containing loan date.\n";
	cout << "3) Display list of camp equipment.\n";
	cout << "4) Update condition of equipment.\n";
	cout << "5) Produce a .txt file that contains all updated data such as loan records and equipment lists.\n";
	cout << "6) Exit.\n\n";
	cout << "Enter the number(1 - 6): \n";
	cin >> option;
	switch (option) {
	case 1:
		cout << "option 1 have been choosen!" << endl;
		break;
	case 2:
		cout << "option 2 have been choosen!" << endl;
		break;
	case 3:
		cout << "option 3 have been choosen!" << endl;
		break;
	case 4:
		cout << "option 4 have been choosen!" << endl;
		break;
	case 5:
		cout << "option 5 have been choosen!" << endl;
		break;
	case 6:
		cout << "option 6 have been choosen!" << endl;
		exit(1);
	}
}