#include "User.h"
#include "FileHandler.h"

// User
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

// Scout
void Scout::setScout(string** scout) {
	this->scout = scout;
}

void Scout::setScoutCount(int scoutCount) {
	this->scoutCount = scoutCount;
}

string** Scout::getScout() {
	setAll();
	return scout;
}

int Scout::getScoutCount() {
	setAll();
	return scoutCount;
}

void Scout::setAll() {
	int scoutCount;
	FileHandler f;
	string** scout = f.scoutFile(scoutCount);
	User us[100];
	for (int i = 0; i < scoutCount; i++) {
		us[i].setUserID(scout[i][0]);
		us[i].setName(scout[i][1]);
		us[i].setSection(scout[i][2]);
		us[i].setBirth(scout[i][3]);
		us[i].setAddress(scout[i][4]);
	}
	setScout(scout);
	setScoutCount(scoutCount);
}

// Scouts
void Scouts::setRank(string rank) {
	this->rank = rank;
}

void Scouts::setScouts(string** scouts) {
	this->scouts = scouts;
}

void Scouts::setScoutsCount(int scoutsCount) {
	this->scoutsCount = scoutsCount;
}

string Scouts::getRank() {
	return rank;
}

string** Scouts::getScouts() {
	setAll();
	return scouts;
}

int Scouts::getScoutsCount() {
	setAll();
	return scoutsCount;
}

void Scouts::setAll() {
	int scoutsCount;
	FileHandler f;
	string** scouts = f.scoutsFile(scoutsCount);
	Scouts st[100];
	for (int i = 0; i < scoutsCount; i++) {
		st[i].setUserID(scouts[i][0]);
		st[i].setName(scouts[i][1]);
		st[i].setSection(scouts[i][2]);
		st[i].setBirth(scouts[i][3]);
		st[i].setAddress(scouts[i][4]);
		st[i].setRank(scouts[i][5]);
	}
	setScouts(scouts);
	setScoutsCount(scoutsCount);
}

// Scouter
void Scouters::setRank(string rank) {
	this->rank = rank;
}

void Scouters::setScouters(string** scouters) {
	this->scouters = scouters;
}

void Scouters::setScoutersCount(int scoutersCount) {
	this->scoutersCount = scoutersCount;
}

string Scouters::getRank() {
	return rank;
}

string** Scouters::getScouters() {
	setAll();
	return scouters;
}

int Scouters::getScoutersCount() {
	setAll();
	return scoutersCount;
}

void Scouters::setAll() {
	int scoutersCount;
	FileHandler f;
	string** scouters = f.scoutersFile(scoutersCount);
	Scouters str[100];
	for (int i = 0; i < scoutersCount; i++) {
		str[i].setUserID(scouters[i][0]);
		str[i].setName(scouters[i][1]);
		str[i].setSection(scouters[i][2]);
		str[i].setBirth(scouters[i][3]);
		str[i].setAddress(scouters[i][4]);
		str[i].setRank(scouters[i][5]);
	}
	setScouters(scouters);
	setScoutersCount(scoutersCount);
}