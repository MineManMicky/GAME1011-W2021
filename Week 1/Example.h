#pragma once
#include <iostream>

class Example
{
	int x;
public:
	Example(int x)
	{
		this->x = x;
	}
	void setValue(int x)
	{
		this->x = x;
	}
	void printAddressAndValue()
	{
		std::cout << "The object address " << this << " has a value " << this->x << std::endl;
	}
};