#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class bin1 {
public:
	bin1() {};
	bin1(int N1, int N2, float a, float b, float x0, float dx, int m) {
		N1 = N1;
		N2 = N2;
		a = a;
		b = b;
		x0 = x0;
		dx = dx;
		m = m;
		xint(N1, N2);
		xfloat(a, b, x0, dx, m);
	};
	int N1, N2, m;
	float a, b, x0, dx;
	int dd[200];

	void xint(int a, int b) {
		for (int i = a; i <= b; i++) {
			dd[i-a] += i;
		}
	}
	void xfloat(float a, float b, float x0, float dx, int m) {
		for (int i = b - a + 1; i < b - a + 1 + m; i++) {
			dd[i] = a * x0 + b;
			x0 += dx;
		}
	}
};