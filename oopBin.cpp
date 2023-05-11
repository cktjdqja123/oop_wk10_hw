#include "oopBin.h"

void main()
{
	//sprint1
	bin1 akali(5,10,2,3,-5,0.1,10);
	bin1 amumu(7, 100, -3.5, 4, 100, 10, 15);
	bin1 annie(12, 17, 0.01, 0.2, 1.5, 0.08, 20);
	bin1 ashe(10, 20, 4.2, -5.3, 2.1, 0.2, 5);

	ofstream aka("akali.dat", ios::binary | ios::out);
	aka.write((char*)akali.dd, sizeof(int) * 16);
	aka.close();

	ofstream amu("amumu.dat", ios::binary | ios::out);
	amu.write((char*)amumu.dd, sizeof(int) * 109);
	amu.close();

	ofstream ann("annie.dat", ios::binary | ios::out);
	ann.write((char*)annie.dd, sizeof(int) * 26);
	ann.close();

	ofstream ash("ashe.dat", ios::binary | ios::out);
	ash.write((char*)ashe.dd, sizeof(int) * 16);
	ash.close();
}