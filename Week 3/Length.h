#pragma once
#include <iostream>
using namespace std;

class Length
{
private:
	int len_inches;
public:
	Length()
	{
		len_inches = 0;
	}
	Length(int inches) // convert constructor
	{
		len_inches = inches;
	}
	Length(int feet, int inches)
	{
		setLength(feet, inches);
	}
	int getFeet() const
	{
		return len_inches / 12;
	}
	int getInches() const
	{
		return len_inches % 12;
	}
	void setLength(int feet, int inches)
	{
		len_inches = (12 * feet) + inches;
	}

	// Operator overloading -- Prototypes
	friend Length operator+(Length a, Length b);
};