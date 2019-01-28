

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	int num;

	while (i)
	{
		cout << "Please enter a number to find out if it is prime! (Enter 0 to quit): ";
		cin >> num;

		if ((num == 2) || (num % 2 != 0))
		{
			cout << "This is a prime number" << endl;
		}
		else if (num == 0)
		{
			break;
		}
		else if (num % 2 == 0)
		{
			cout << "This is not a prime number" << endl;
		}
	}

}



