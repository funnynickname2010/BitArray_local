#pragma once
#include <iostream>
#include <math.h>

class BitArray
{
	int unsigned* bitarray;
	int unsigned reserved_ints;
	int unsigned used_bits;

	unsigned int BitMask(unsigned int& task, unsigned int& location);
	unsigned int BitMask(unsigned int& task);
	int ElementIndex();

	void TurnOn(unsigned int& index);
	void TurnOff(unsigned int& index);

	BitArray operator =(BitArray& obj2);

	BitArray(); //Make a constant
	BitArray(unsigned int& n);
	BitArray(BitArray& obj2);
	~BitArray();
};

