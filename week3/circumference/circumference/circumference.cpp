#include "pch.h"
#include <iostream>
using namespace std;

double calculateCircumference(double radius);
const float PI = 3.14159265358979323846;

int main()
{
	double radius = 0;
	calculateCircumference(radius);
}

double calculateCircumference(double radius)
{
	double circumference = 0;
	cout << "Please enter the radius of your circle in inches: ";
	cin >> radius;
	cout << endl;
	circumference = PI * (radius * radius);
	cout << "Your circle's circumference is: " << circumference << " inches." << endl;
	return circumference;
}
