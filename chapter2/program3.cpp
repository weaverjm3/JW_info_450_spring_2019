
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int gallons;
	int liters;
	cout << "Enter number of gallons: ";
	cin >> gallons;

	liters = gallons * 4;

	cout << "Liters: " << liters;

	return 0;
}

