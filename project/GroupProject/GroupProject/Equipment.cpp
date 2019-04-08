#include "Equipment.h"


//Equipment
void CampEquipment::setItemID(string itemID) {
	this->itemID = itemID;
}

void CampEquipment::setItemName(string itemName) {
	this->itemName = itemName;
}

void CampEquipment::setBrand(string brand) {
	this->brand = brand;
}

void CampEquipment::setItemType(string itemType) {
	this->itemType = itemType;
}

void CampEquipment::setDateOfPurchase(string dateOfPurchase) {
	this->dateOfPurchase = dateOfPurchase;
}

void CampEquipment::setCondition(string condition) {
	this->condition = condition;
}

void CampEquipment::setStatus(string status) {
	this->status = status;
}


//Tent
void Tent::setTentSize(string tentSize) {
	this->tentSize = tentSize;
}

void Tent::setTentType(string tentType) {
	this->tentType = tentType;
}

void Tent::setNumberOfDoors(string numberOfDoors) {
	this->numberOfDoors = numberOfDoors;
}

void Tent::setDoubleLayer(string doubleLayer) {
	this->doubleLayer = doubleLayer;
}

void Tent::setColour(string colour) {
	this->colour = colour;
}


//Stove
void Stove::setStoveType(string stoveType) {
	this->stoveType = stoveType;
}

void Stove::setFuelType(string fuelType) {
	this->fuelType = fuelType;
}


//Lantern
void Lantern::setLanternSize(string lanternSize) {
	this->lanternSize = lanternSize;
}

void Lantern::setLanternType(string lanternType) {
	this->lanternType = lanternType;
}

void Lantern::setFuelType(string fuelType) {
	this->fuelType = fuelType;
}