#include "pch.h"
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
	string name;
	string student[2][30];

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 30; j++)
		{
			cout << "Please enter a student's first and last name to add them to a list, OR press ENTER to see the Student List: ";
			getline(cin, name);
			cout << endl;

			if (name == "")
			{
				break;
			}
			else
			{
				student[i][j] = name;
			}
		}
		break;
	}

	cout << "Student List:" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 30; j++)
		{
			cout << student[i][j] << endl;			
		}
	}
}
