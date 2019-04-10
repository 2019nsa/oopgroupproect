#include <iostream>
#include <string>
#include "FileHandler.h"
#include "User.h"
#include "Equipment.h"

using namespace std;

int main() {
	Scout s;
	string** dis1 = s.getScout();
	for (int i = 0; i < s.getScoutCount(); i++) {
		for (int j = 0; j < 5; j++) {
			cout << dis1[i][j] << " ";
		}
		cout << endl;
	}
	Scouts ss;
	string** dis2 = ss.getScouts();
	for (int i = 0; i < ss.getScoutsCount(); i++) {
		for (int j = 0; j < 6; j++) {
			cout << dis2[i][j] << " ";
		}
		cout << endl;
	}
	Scouters st;
	string** dis3 = st.getScouters();
	for (int i = 0; i < st.getScoutersCount(); i++) {
		for (int j = 0; j < 6; j++) {
			cout << dis3[i][j] << " ";
		}
		cout << endl;
	}
	Tent te;
	string** dis4 = te.getTent();
	for (int i = 0; i < te.getTentCount(); i++) {
		for (int j = 0; j < 12; j++) {
			cout << dis4[i][j] << " ";
		}
		cout << endl;
	}
	Stove sto;
	string** dis5 = sto.getStove();
	for (int i = 0; i < sto.getStoveCount(); i++) {
		for (int j = 0; j < 9; j++) {
			cout << dis5[i][j] << " ";
		}
		cout << endl;
	}
	Lantern lan;
	string** dis6 = lan.getLantern();
	for (int i = 0; i < lan.getLanternCount(); i++) {
		for (int j = 0; j < 10; j++) {
			cout << dis6[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}