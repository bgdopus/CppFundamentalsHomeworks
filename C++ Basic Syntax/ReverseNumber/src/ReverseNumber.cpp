//============================================================================
// Name        : ReverseNumber.cpp
// Author      : Daniel Georiev
// Version     :
// Copyright   : Your copyright notice
// Description : Reverse number
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
	int number;
	int reverse = 0;

	cin >> number;

	while(number!= 0)
	{
	    reverse = reverse * 10;
	    reverse = reverse + number%10;
	    number = number/10;
	}

	cout<< reverse <<endl;

	return 0;
}
