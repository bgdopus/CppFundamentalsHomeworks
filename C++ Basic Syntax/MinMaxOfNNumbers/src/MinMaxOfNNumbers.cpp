//============================================================================
// Name        : MinMaxOfNNumbers.cpp
// Author      : Daniel Georiev
// Version     :
// Copyright   : Your copyright notice
// Description : program that reads from the console a sequence of N integer numbers and returns the minimal and maximal of them
//============================================================================

#include <iostream>
#include <climits>

using namespace std;

int main() {
	int n;
	int minNumber = INT_MAX;
	int maxNumber = INT_MIN;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int number;
		cin >> number;

		if(number > maxNumber)
		{
			maxNumber = number;
		}

		if(number < minNumber)
		{
			minNumber = number;
		}
	}

	cout << minNumber << endl;
	cout << maxNumber << endl;
	return 0;
}
