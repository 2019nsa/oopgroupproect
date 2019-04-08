#include "User.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

//User
void User::setUserID(string userID) {
	this->userID = userID;
}

void User::setName(string name) {
	this->name = name;
}

void User::setSection(string section) {
	this->section = section;
}

void User::setBirth(string birth) {
	this->birth = birth;
}

void User::setAddress(string address) {
	this->address = address;
}

string User::getUserID() {
	return userID;
}

string User::getName() {
	return name;
}

string User::getSection() {
	return section;
}

string User::getBirth() {
	return birth;
}

string User::getAddress() {
	return address;
}

//Scout
void Scout::setRank(string rank) {
	this->rank = rank;
}

string Scout::getRank() {
	return rank;
}

//Scouter
void Scouter::setRank(string rank) {
	this->rank = rank;
}

string Scouter::getRank() {
	return rank;
}
