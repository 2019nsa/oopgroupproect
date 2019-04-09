#ifndef LOANCONTROL_H
#define LOANCONTROL_H

#include <string>
#include <iostream>

using namespace std;

class LoanControl {
public:
	void displayNumCanBorrow(string type);
	string* loanItem(int typeLimit, string** tent, int tentCount, string** stove, int stoveCount, string** lantern, int lanternCount, int& noOFBorrow);
};

#endif