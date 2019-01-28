#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int num;
	for (;;)
	{
		cout << "Please enter a positive number to find its value when squared! (Enter 0 to quit): ";
		cin >> num;

		if (num >= 1)
		{
			cout << " Your value squared is: ";
			cout << num * num << endl;
		}
		else if (num <= -1)
		{
			cout << "Please enter a positive value!" << endl;
		}
		else if (num == 0)
		{
			break;
		}

	}

}