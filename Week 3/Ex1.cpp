#include <iostream>
#include "Length.h"
using namespace std;

int main()
{
	Length first(0), second(0), third(0);
	int f, i; // Feet, inches

	cout << "Enter a distance in feet and inches: ";
	cin >> f >> i;
	first.setLength(f, i);
	
	cout << "Enter another distance in feet and inches: ";
	cin >> f >> i;
	second.setLength(f, i);
	
	// Test the + operator
	third = first + second;
	cout << "first + second = ";
	cout << third.getFeet() << " feet, " << third.getInches() << " inches." << endl;

	return 0;
}