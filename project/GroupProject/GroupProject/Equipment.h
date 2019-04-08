#include <string>

using namespace std;

#ifndef CAMPEQUIPMENT_H
#define	CAMPEQUIPMENT_H

//Camp Equipment
class CampEquipment {
protected:
	string itemID;
	string itemName;
	string brand;
	string itemType;
	string dateOfPurchase;
	string condition;
	string status;
public:
	void setItemID(string itemID);
	void setItemName(string itemName);
	void setBrand(string brand);
	void setItemType(string itemType);
	void setDateOfPurchase(string dateOfPurchase);
	void setCondition(string condition);
	void setStatus(string status);
};


//Tent
class Tent : public CampEquipment {
private:
	string tentSize;
	string tentType;
	string numberOfDoors;
	string doubleLayer;
	string colour;
public:
	void setTentSize(string tentSize);
	void setTentType(string tentType);
	void setNumberOfDoors(string numberOfDoors);
	void setDoubleLayer(string doubleLayer);
	void setColour(string colour);
};


//Stove
class Stove : public CampEquipment {
private:
	string stoveType;
	string fuelType;
public:
	void setStoveType(string stoveType);
	void setFuelType(string fuelType);
};


//Lantern
class Lantern : public CampEquipment {
private:
	string lanternSize;
	string lanternType;
	string fuelType;
public:
	void setLanternSize(string lanternSize);
	void setLanternType(string lanternType);
	void setFuelType(string fuelType);
};
#endif