/*
 * Calculator.h
 *
 *  Created on: Apr 19, 2022
 *      Author: green
 */

#ifndef CALCULATOR_H_
#define CALCULATOR_H_

#include <iostream>
using namespace std;

class Calculator {
public:
	Calculator();

	void run();
private:
	float firstNumber, secondNumber;

	void getEntries();
	enum CHOICE{
		INVALID = 0,
		ADD,
		SUBTRACT,
		MULTIPLY,
		DIVIDE
	}_choice;
};

#endif /* CALCULATOR_H_ */
