#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int year;

	for (;;)
	{
		cout << "Enter a full year to see if it is a leap year! (Enter 0 to quit): ";
		cin >> year;

		if (year % 4 != 0)
		{
			cout << "This is NOT a leap year!" << endl;
		}

		else if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0)
		{
			cout << "This is a leap year!" << endl;
		}

		else if (year % 100 != 0)
		{
			cout << "This is a leap year!" << endl;
		}

		else if (year % 400 != 0)
		{
			cout << "This is NOT a leap year!" << endl;
		}

		else if (year == 0)
		{
			break;
		}
	}
}

