#include "pch.h"
#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string type;
	int wheels;
	int passengers;
	int cargolbs;
	string type2;
	string line;
	ifstream file("output.txt");
	if (file.is_open())
	{
		while (getline(file, line))
		{
			if (line == type && type == "truck")
			{
				while (line != " ")
				{
					cout << type << ", wheels: " << wheels << ", passengers: " << passengers << ", cargo: " << cargolbs << endl;
				}				
			}

			if (line == type && line == "automobile")
			{
				while (line != " ")
				{
					cout << type << ", wheels: " << wheels << ", passengers: " << passengers << ", type: " << type2 << endl;
				}
			}
		}
		file.close();
	}

	else cout << "Unable to open file";
	return 0;
}

