#include "Admin.h"

using namespace std;

int Admin::adminMenu(string rightUser) {
	int option = 0;
	cout << "1) Inserting tabulated files containing batches of users and batches of camp equipment.\n";
	cout << "2) Display loan records containing loan date.\n";
	cout << "3) Display list of camp equipment.\n";
	cout << "4) Update condition of equipment.\n";
	cout << "5) Produce a .txt file that contains all updated data such as loan records and equipment lists.\n";
	cout << "6) Exit.\n\n";
	cout << "Enter the number(1 - 6): \n";
	cin >> option;
	return option;
}