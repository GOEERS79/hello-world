#ifndef FOO_H // This needs to be unique in each header
#define FOO_H
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <new>

using namespace std;

class Quadrilateral {  //base class

public:
	double side1, side2, side3, side4;

	virtual ~Quadrilateral() {

		cout << "~Quadrilateral ..." << endl;

	}

public:
	Quadrilateral(double s1, double s2, double s3, double s4)	 {
		cout << "Quadrilateral constructed" << endl;
		side1 = s1;
		side2 = s2;
		side3 = s3;
		side4 = s4;

	}
	virtual void display() {

		cout << "Quadrilateral with sides: " << side1 << " " << side2 <<
		" " << side3 << " " << side4 << endl;
	}

};
#endif
