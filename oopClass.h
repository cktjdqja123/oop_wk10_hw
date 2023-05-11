#pragma once
#include <iostream>
using namespace std;

class oop {
public:
    oop() {};
    oop(int fm, int sp, int sn, int mj) {
        freshman = fm;
        sophomore = sp;
        senior = sn;
        major = mj;
        total = fm + sp + sn + mj;
    }

    int freshman, sophomore, senior, major;
    int total;

    float member() {
        total = freshman + sophomore + senior + major;
        return total;
    }
    oop operator+(oop& b) {
        oop c;
        c.freshman = freshman + b.freshman;
        c.sophomore = sophomore + b.sophomore;
        c.senior = senior + b.senior;
        c.major = major + b.major;
        return c;
    }
};