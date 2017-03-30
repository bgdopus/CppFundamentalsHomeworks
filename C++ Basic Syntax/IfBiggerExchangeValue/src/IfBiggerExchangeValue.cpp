//============================================================================
// Name        : IfBiggerExchangeValue.cpp
// Author      : Daniel Georiev
// Version     :
// Copyright   : Your copyright notice
// Description : If second number is greater than first number exchange their values
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int firstNumber = 1;
	int secondNumber = 2;
	cout << "Before the exchange" << endl;
	cout << firstNumber  << endl;
	cout << secondNumber << endl;

	if (firstNumber < secondNumber)
	{
		int buffer = firstNumber;
		firstNumber = secondNumber;
		secondNumber = buffer;
	}
	cout << "After the exchange" << endl;
	cout << firstNumber  << endl;
	cout << secondNumber << endl;
	return 0;
}
