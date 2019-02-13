#include "pch.h"
#include <iostream>
using namespace std;
int add_one(int, int);

int main() {

	int x = 3;

	int y = 5;

	add_one(x, y);

	cout << x << ":" << y << endl;

	return 0;

}
int add_one(int x, int y) {

	x++;

	y++;

	return ++x;

}