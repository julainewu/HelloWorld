/*
 * Calculator.cpp
 *
 *  Created on: Apr 19, 2022
 *      Author: green
 */

#include "Calculator.h"
#include <iostream>
using namespace std;

Calculator::Calculator() {
	firstNumber = 0;
	secondNumber = 0;
	_choice = INVALID;
}
void Calculator::run()
{
	_choice = CHOICE::INVALID;
	while(_choice == CHOICE::INVALID)
	{
		int choice = 0;
		cout << "press 1 for add, 2 for subtraction, 3 for multiply, 4 for divide \n";
		cin >> choice;

		if (choice > 0 && choice < 5){
			_choice = static_cast<CHOICE>(choice);
		}
		else {
			cout << "Invalid entry\n";
		}
	}
	switch(_choice){
	case ADD:
		cout << "add numbers\n";
		getEntries();
		cout << "result = " << firstNumber <<" + " << secondNumber;
		break;
	case SUBTRACT:
		cout << "subtract numbers\n";
		getEntries();
		cout << "result = " << firstNumber <<" - " << secondNumber;
		break;
	case MULTIPLY:
		cout << "multiply numbers\n";
		getEntries();
		cout << "result = " << firstNumber <<" * " << secondNumber;
		break;
	case DIVIDE:
		cout << "divide numbers\n";
		getEntries();

		cout << "result = " << firstNumber <<" / " << secondNumber;
		break;
	}

}

void Calculator::getEntries(){
	std::cout << "enter first number";
	std::cin >> firstNumber;
	std::cout <<"enter second number";
	std::cin >> secondNumber;
}



