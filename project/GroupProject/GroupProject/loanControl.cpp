#include "LoanControl.h"

void LoanControl::displayNumCanBorrow(string type) {
	if (type == "Member")
		cout << "You can borrow at most 1 item." << endl;
	else if (type == "Patrol Leader" || type == "Assistant Patrol Leader")
		cout << "You can borrow at most 3 item." << endl;
	else if (type == "Venture Scout")
		cout << "You can borrow at most 3 item." << endl;
	else if (type == "Rover Scout" || type == "Scouter")
		cout << "You can borrow at most 5 item." << endl;
}

string* LoanControl::loanItem(int typeLimit, string** tent, int tentCount, string** stove, int stoveCount, string** lantern, int lanternCount) {
	bool flag = true;
	string *arr = new string[typeLimit + 1];
	bool *check = new bool[typeLimit];
	do {
		cout << "What would you like to borrow? (if you just borrow 1 item, just type n for other itemID.)" << endl;
		cout << "For example (you can borrow at most 2 things): T002 n " << endl;
		cout << "Input at most " << typeLimit << " itemID to borrow:";
		arr[typeLimit] = "n";
		for (int i = 0; i < typeLimit; i++) {
			check[i] = true;
		}
		for (int i = 0; i < typeLimit; i++) {
			cin >> arr[i];
		}
		for (int i = 0; i < typeLimit + 1; i++) {
			if (arr[i].substr(0, 1) == "T") {
				for (int j = 0; j < tentCount; j++) {
					if (arr[i] == tent[j][0]) {
						if (tent[j][5] != "good") {
							cout << tent[j][0] << " is not available." << endl;
							check[i] = false;
						}
					}
				}
			}
			else if (arr[i].substr(0, 1) == "S") {
				for (int j = 0; j < stoveCount; j++) {
					if (arr[i] == stove[j][0]) {
						if (stove[j][5] != "good") {
							cout << stove[j][0] << " is not available." << endl;
							check[i] = false;
						}
					}
				}
			}
			else if (arr[i].substr(0, 1) == "L") {
				for (int j = 0; j < lanternCount; j++) {
					if (arr[i] == lantern[j][0]) {
						if (lantern[j][5] != "good") {
							cout << lantern[j][0] << " is not available." << endl;
							check[i] = false;
						}
					}
				}
			}
			else if (arr[i].substr(0, 1) == "n") {
				cout << endl;
				break;
			}
			else
				cout << "There is no any " << arr[i] << endl;
			
		}
		int count = 0;
		for (int i = 0; i < typeLimit + 1; i++) {
			if (arr[i].substr(0, 1) == "n") {
				for (int j = 0; j < typeLimit; j++) {
					if (check[j] == false);
						count++;
				}
				cout << endl;
				cout << count << endl;
				cout << "You borrow " << i - count << " items." << endl;
				break;
			}
		}
		for (int i = 0; i < typeLimit; i++) {
			if (check[i] == false) {
				flag = true;
				break;
			}
			else
				flag = false;
		}
	} while (flag == true);
	delete[] check;
	check = 0;
	return arr;
}