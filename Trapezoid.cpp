#ifndef FOO_H2 // This needs to be unique in each header
#define FOO_H2
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <new>

#include "Quadrilateral.cpp"

using namespace std;

class Trapezoid : public Quadrilateral {
public:

	~Trapezoid() {

		cout << "~Trapezoid ..." << endl;

	}

	Trapezoid(double s1, double s2, double s3, double s4) :
		Quadrilateral(s1,s2,s3,s4) {}

	void display() {

		cout << "Trapezoid with sides: " << side1 << " " << side2 <<
		" " << side3 << " " << side4 << endl;
	}

};
#endif

