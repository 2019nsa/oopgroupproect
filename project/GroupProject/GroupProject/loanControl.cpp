#include "LoanControl.h"
#include "Equipment.h"

string* LoanControl::loanItem(int typeLimit, int& noOfBorrow) {
	bool flag = true;
	noOfBorrow = 0;
	Tent ten;
	Stove sto;
	Lantern lan;
	string *arr = new string[typeLimit + 1];
	bool *check = new bool[typeLimit];
	do {
		cout << "What would you like to borrow? (if you just borrow 1 item, just type n for other itemID.)" << endl;
		cout << "For example (if you can borrow at most 2 things): T002 n " << endl;
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
				for (int j = 0; j < ten.getTentCount(); j++) {
					if (arr[i] == ten.getTent()[j][0]) {
						if (ten.getTent()[j][5] != "good" || ten.getTent()[j][6] != "in") {
							cout << ten.getTent()[j][0] << " is not available." << endl;
							check[i] = false;
						}
					}
				}
			}
			else if (arr[i].substr(0, 1) == "S") {
				for (int j = 0; j < sto.getStoveCount(); j++) {
					if (arr[i] == sto.getStove()[j][0]) {
						if (sto.getStove()[j][5] != "good" || sto.getStove()[j][6] != "in") {
							cout << sto.getStove()[j][0] << " is not available." << endl;
							check[i] = false;
						}
					}
				}
			}
			else if (arr[i].substr(0, 1) == "L") {
				for (int j = 0; j < lan.getLanternCount(); j++) {
					if (arr[i] == lan.getLantern()[j][0]) {
						if (lan.getLantern()[j][5] != "good" || lan.getLantern()[j][6] != "in") {
							cout << lan.getLantern()[j][0] << " is not available." << endl;
							check[i] = false;
						}
					}
				}
			}
			else if (arr[i].substr(0, 1) == "n") {
				cout << endl;
				break;
			}
			else {
				cout << "There is no any " << arr[i] << endl;
				check[i] = false;
			}
		}
		int count = 0;
		for (int i = 0; i < typeLimit + 1; i++) {
			if (arr[i].substr(0, 1) == "n") {
				for (int j = 0; j < typeLimit; j++) {
					if (check[j] == false)
						count++;
				}
				if (count == 0) {
					cout << "You borrow " << i << " items." << endl;
					noOfBorrow = i;
				}
				else
					cout << "You borrow " << 0 << " item." << endl;
				cout << endl;
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