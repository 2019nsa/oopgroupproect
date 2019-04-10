#ifndef ADMIN_H
#define ADMIN_H

#include <string>
#include <iostream>

using namespace std;

class Admin {
private:
	string userID;
	string password;
public:
	Admin();
	string getUserID();
	string getPassword();
	int adminMenu();
};

#endif