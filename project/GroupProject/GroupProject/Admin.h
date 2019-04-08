#include <string>

using namespace std;

#ifndef ADMIN_H
#define ADMIN_H

class Admin{
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
