#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class bin1 {
public:
	bin1() {};
	bin1(int N1, int N2, float a, float b, float x0, float dx, int m, char *fn) {
		N1 = N1;
		N2 = N2;
		a = a;
		b = b;
		x0 = x0;
		dx = dx;
		m = m;
		xint(N1, N2);
		xfloat(a, b, x0, dx, m);
		ofstream bb(fn, ios::binary | ios::out);
		bb.write((char*)dd, sizeof(int) * (b - a + 1 + m));
		bb.close();
		delete dd;
	};
	int N1, N2, m;
	float a, b, x0, dx;
	int* dd = new int[200];

	void xint(int a, int b) {
		for (int i = a; i <= b; i++) {
			dd[i-a] += i;
		}
	}
	void xfloat(float a, float b, float x0, float dx, int m) {
		for (int i = N2 - N1 + 1; i < N2 - N1 + 1 + m; i++) {
			dd[i] = a * x0 + b;
			x0 += dx;
		}
	}
};