//============================================================================
// Name        : Prototypes.cpp
// Author      : Smirnov Pavel
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "utils.h"
using namespace std;

int counter()
{
	double num = 100000.5;
	for(double i = 0; i < num; i++)
	{
		cout << i << "*" << i << "=" << i * i << endl;
	}
	return 0;
}
int main() {
	doSomething();
	doSomething();
	counter();
	cout << "=================Finishing Programm!!!====================" << endl;
	return 0;
}
void doSomething()
{
	string input;
	cout << "Please enter your name: " << flush;
	cin >> input;
	cout << "Hello, " << input << endl;
}