//============================================================================
// Name        : ProductSign.cpp
// Author      : Daniel Georiev
// Version     :
// Copyright   : Your copyright notice
// Description : Show product sign of three numbers
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a = 2;
	int b = 1;
	int c = -5;

	if (a < 0)
	{
		if(b < 0)
		{
			if(c < 0)
			{
				cout << "-" << endl;
			}
			else
			{
				cout << "+" << endl;
			}
		}
		else
		{
			if(c < 0)
			{
				cout << "+" << endl;
			}
			else
			{
				cout << "-" << endl;
			}
		}

	}
	else
	{
		if(b < 0)
		{
			if(c < 0)
			{
				cout << "+" << endl;
			}
			else
			{
				cout << "-" << endl;
			}
		}
		else
		{
			if(c < 0)
			{
				cout << "-" << endl;
			}
			else
			{
				cout << "+" << endl;
			}
		}
	}

	return 0;
}
