#include <string>

using namespace std;

#ifndef CAMPEQUIPMENT_H
#define	CAMPEQUIPMENT_H

//Camp Equipment
class Equipment {
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
	string getItemID();
	string getItemName();
	string getBrand();
	string getItemType();
	string getDateOfPurchase();
	string getCondition();
	string getStatus();
};

//Tent
class Tent : public Equipment {
private:
	string tentSize;
	string tentType;
	string numberOfDoors;
	string doubleLayer;
	string colour;
	string** tent;
	int tentCount;
public:
	void setTentSize(string tentSize);
	void setTentType(string tentType);
	void setNumberOfDoors(string numberOfDoors);
	void setDoubleLayer(string doubleLayer);
	void setColour(string colour);
	void setTent(string** tent);
	void setTentCount(int tentCount);
	string getTentSize();
	string getTentType();
	string getNumberOfDoors();
	string getDoubleLayer();
	string getColour();
	string** getTent();
	int getTentCount();
	void setAllTent();
};


//Stove
class Stove : public Equipment {
private:
	string stoveType;
	string fuelType;
	string** stove;
	int stoveCount;
public:
	void setStoveType(string stoveType);
	void setFuelType(string fuelType);
	void setStove(string** stove);
	void setStoveCount(int stoveCount);
	string getStoveType();
	string getFuelType();
	string** getStove();
	int getStoveCount();
	void setAllStove();
};


//Lantern
class Lantern : public Equipment {
private:
	string lanternSize;
	string lanternType;
	string fuelType;
	string** lantern;
	int lanternCount;
public:
	void setLanternSize(string lanternSize);
	void setLanternType(string lanternType);
	void setFuelType(string fuelType);
	void setLantern(string** lantern);
	void setLanternCount(int lanternCount);
	string getLanternSize();
	string getLanternType();
	string getFuelType();
	string** getLantern();
	int getLanternCount();
	void setAllLantern();
};
#endif