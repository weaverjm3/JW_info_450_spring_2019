#include "pch.h"
#include <cstdio>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main() 
{
	ofstream out;
	out.open("output.txt");
	if (!out) 
	{
		cout << "Cannot open file." << endl;
		return 1;
	}
	if (!out.is_open()) 
	{
		cout << "File is not open." << endl;
		return 2;
	}

	cout << "VEHICLE LIST" << endl;
	int vehiclenum = 0;
	for (;;)
	{ 
		string type;
		int wheels;
		int passengers;
		int cargolbs;
		string type2;
		string exit;

		vehiclenum += 1;
		cout << "Is this an automobile or a truck? Enter 'automobile' or 'truck' ";
		cin >> type;
		out << type << endl;

		cout << "How many wheels does this vehicle have? ";
		cin >> wheels;
		out << wheels << endl;

		cout << "How many passengers can this vehicle hold? ";
		cin >> passengers;
		out << passengers << endl;

		if (type == "truck")
		{
			cout << "How much cargo (in pounds) can this vehicle hold? ";
			cin >> cargolbs;
			out << cargolbs << endl;
		}

		if (type == "automobile")
		{
			cout << "What type of automobile is this?   Enter van, car or wagon ";
			cin >> type2;
			out << type2 << endl;
		}

		cout << "Would you like to enter another vehicle? yes or no: ";
		cin >> exit;
		cout << endl;
		if (exit == "yes")
		{
			continue;
		}
		else
		{
			break;
		}
	
	}
	string line;
	ifstream file("output.txt");
	if (file.is_open())
	{
		while (getline(file, line))
		{
			cout << line << endl;
		}
		file.close();
	}

	else cout << "Unable to open file";
	out.close();
	return 0;
}