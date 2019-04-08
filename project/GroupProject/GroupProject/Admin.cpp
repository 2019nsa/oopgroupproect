#include "Admin.h"

Admin::Admin(){
	this->userID = "admin";
	this->password = "admin";
}

string Admin::getUserID() {
	return userID;
}

string Admin::getPassword() {
	return password;
}
