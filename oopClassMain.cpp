#include "oopClass.h"

void main()
{
	oop A, B, C, D;
	A = oop(10, 50, 3, 4);
	B = oop(0, 45, 2, 4);
	C = oop(A.freshman + B.freshman, A.sophomore + B.sophomore, A.senior + B.senior, A.major + B.major);
	D = A + B;
	cout << A.freshman << " " << A.sophomore << " " << A.senior << " " << A.major << endl;
	cout << B.freshman << " " << B.sophomore << " " << B.senior << " " << B.major << endl;
	cout << C.freshman << " " << C.sophomore << " " << C.senior << " " << C.major << endl;
	cout << D.freshman << " " << D.sophomore << " " << D.senior << " " << D.major << endl;
}