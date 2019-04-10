#ifndef LOANCONTROL_H
#define LOANCONTROL_H

#include <string>
#include <iostream>

using namespace std;

class LoanControl {
public:
	string* loanItem(int typeLimit, int& noOFBorrow);
};

#endif