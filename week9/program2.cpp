#include "pch.h"
#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string line;
	ifstream file("test.txt");
	if (file.is_open())
	{
		while (getline(file, line))
		{
			cout << line << endl;
		}
		file.close();
	}

	else cout << "Unable to open file";
	return 0;
}

