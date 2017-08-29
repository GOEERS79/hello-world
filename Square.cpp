#ifndef FOO_H3 // This needs to be unique in each header
#define FOO_H3
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <new>

#include "Quadrilateral.cpp"

using namespace std;

class Square : public Quadrilateral {

public:

	~Square() {

		cout << "~Square ..." << endl;

  }
  
public:
	Square(double side) :
		Quadrilateral(side,side,side,side) {cout << "Shape constructed .." << endl;}


	void display() {

		cout << "Square with sides: " << side1 << " " << side2 <<
		" " << side3 << " " << side4 << endl;
	}

	void Dummy() {};

};

//void Square::Dummy () {}
	//void Square::display() {

		//cout << "Square with sides: " << side1 << " " << side2 <<
		//" " << side3 << " " << side4 << endl;
	//}

#endif
