#include "oopFC.h"

int main()
{
	//sprint1
	FC fc;
	CITY city;
	for (int i = 0; i < 12; i++) {
		fc = FC(city.CF[i]);
		cout << fc.getF() << endl;
	}
	//sprint2
	CITY cc((char*)"Seoul.txt");
	for (int i = 0; i < 11; i++) {
		fc = FC(cc.CC[i]);
		cout << fc.getF() << endl;
	}
	//sprint3
	CITY cities[4];
	cities[0].cel = 22;
	cities[1].cel = 24;
	cities[2].cel = 26;
	cities[3].cel = 28;
	ofstream xx("CityF.txt");
	for (int i = 0; i < 4; i++) {
		fc = FC(cities[i].cel);
		xx << fc.getF() << " " << fc.getC() << endl;
	}
	xx.close();
}