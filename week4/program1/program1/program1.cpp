#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int sum = 0;
	double sum2 = 0;
	double mean = 0;
	double std_dev = 0;
	int whole_numbers[10];
	double squared_differences[10];

	for (int i = 0; i < 10; i++)
	{
		cout << "Please enter a whole number! ";
		cin >> whole_numbers[i];
	}
	
	cout << "You have entered: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << whole_numbers[i] << endl;
	}
	
	sum = whole_numbers[0] + whole_numbers[1] + whole_numbers[2] + whole_numbers[3] + whole_numbers[4]
	+ whole_numbers[5] + whole_numbers[6] + whole_numbers[7] + whole_numbers[8] + whole_numbers[9];

	mean = double(sum) / 10;

	cout << "The mean of these numbers is: " << mean << endl;

	for (int i = 0; i < 10; i++)
	{
		squared_differences[i] = pow((whole_numbers[i] - mean), 2);
	}

	sum2 = squared_differences[0] + squared_differences[1] + squared_differences[2] + squared_differences[3] + squared_differences[4]
	+ squared_differences[5] + squared_differences[6] + squared_differences[7] + squared_differences[8] + squared_differences[9];

	std_dev = sqrt(sum2);

	cout << "The standard deviation of the numbers is: " << std_dev << endl;
}