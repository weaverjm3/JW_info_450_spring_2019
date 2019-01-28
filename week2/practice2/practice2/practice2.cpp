#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	int count = 0;
	int num;

	for (;;)
	{
		cout << "Please enter a number to find out if it is prime! (Enter 0 to quit): ";
		cin >> num;

		if (num == 0)
		{
			break;
		}
		else
		{
			for (i = 2; i < num; i++)
				if (num % i == 0)
					count++;
		}
		if (count > 1) 
		{
			cout << "This is not a prime number" << endl;
		}
		else
		{
			cout << " This is a prime number" << endl;
		}
	}

}