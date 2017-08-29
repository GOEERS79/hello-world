#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <fstream>
#include <new>
#include <dlfcn.h>


#include "Quadrilateral.cpp"

#include "Trapezoid.cpp"

#include "Square.cpp"

using namespace std;

class Fish {
  Fish() {};

};



int main(int argc, const char * argv[]) {

	//Trapezoid *trObj = new Trapezoid(1,5,5,9);
	//trObj->display();

	Trapezoid tzObj(1,5,5,9);
	Square sqObj(10);
  Quadrilateral quadObj(10,20,30,40);

	//Polymorphism next, must use reference to the object in the vector

	vector<Quadrilateral*> myVect;
	myVect.push_back(&tzObj);
	myVect.push_back(&sqObj);
  myVect.push_back(&quadObj);

	for (int i=0; i < myVect.size(); i++) {
		myVect[i]->display();
	}

	return 0;

}
