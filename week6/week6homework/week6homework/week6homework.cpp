#include "pch.h"
#include <iostream>
#include <cstdio>
using namespace std;


class Employee
{
private:
	char firstName[255];
	char lastName[255];
	bool employeeType;
	int compensation;

public:
	void set_firstName(const char* inname) { strcpy_s(firstName, inname); }
	void set_lastName(const char* inname) { strcpy_s(lastName, inname); }
	void set_employeeType(bool inp) { employeeType = inp; }
	void set_compensation(int inp) { compensation = inp; }
	void printEntry()
	{
		cout << endl << lastName << ", ";
		cout << firstName << ": $";
		cout << compensation << "per year" << endl;
	}
	
};

int main()
{
	const int MAX = 3;
	Employee entry[MAX];
	for (int i = 0; i < MAX; i++)
	{
		cout << "Employee Entry: " << i + 1 << endl;
		char *input = (char *)malloc(255);
		int input2;

		cout << "Please enter employee's first name: ";
		cin.ignore();
		cin.getline(input, 255);
		entry[i].set_firstName(input);

		cout << "Please enter employee's last name: ";
		cin.getline(input, 255);
		entry[i].set_lastName(input);

		for (;;)
		{
			cout << "Is employee HOURLY(1) or SALARY(2)?: ";
			cin >> input2;
			if (input2 == 1)
			{
				entry[i].set_employeeType(false);
				cout << "Please enter employee's hourly rate: ";
				cin >> input2;
				input2 *= 2000;
				entry[i].set_compensation(input2);
				break;
			}
			else if (input2 == 2)
			{
				entry[i].set_employeeType(true);
				cout << "Please enter employee's salary: ";
				cin >> input2;
				entry[i].set_compensation(input2);
				break;
			}
			else
			{
				cout << "Please enter a valid value: " << endl;
			}

		}
		input == 0;
	}

	for (int i = 0; i < MAX; i++) 
	{
		entry[i].printEntry();
	}

	return 0;
}
	



