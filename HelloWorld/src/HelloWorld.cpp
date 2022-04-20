//============================================================================
// Name        : HelloWorld.cpp
// Author      : Julaine
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Calculator.h";

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	cout << "From a C++ program" <<endl;
	Calculator calc;
	calc.run();
}
