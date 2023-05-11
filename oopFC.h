#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class FC {
public:
	FC() {};
	FC(float cc) { c = cc; f = getF(); };
	float c, f;
	float getF() { return (c * 9 / 5 + 32.0); }
	float getC() { return ((f - 32.0) * 5 / 9); }
};
class CITY {
public:
	CITY() {};
	float cel;
	float CF[12] = { 10,15,20,25,30,35,40,45,50,55,60,65 };
	float CC[11];
	CITY(char* fn) {
		ifstream xx("Seoul.txt");
		for (int i = 0; i < 11; i++) {
			xx >> CC[i];
		}
	}

};