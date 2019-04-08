#include <string>
#include "FileHandler.h"

using namespace std;

#ifndef USER_H
#define USER_H

class User {
protected:
	string userID;
	string name;
	string section;
	string birth;
	string address;
public:
	void setUserID(string userID);
	void setName(string name);
	void setSection(string section);
	void setBirth(string birth);
	void setAddress(string address);
	string getUserID();
	string getName();
	string getSection();
	string getBirth();
	string getAddress();
};

class Scout : public User {
private:
	string rank;
public:
	void setRank(string rank);
	string getRank();
};

class Scouter : public User {
private:
	string rank;
public:
	void setRank(string rank);
	string getRank();
};
#endif