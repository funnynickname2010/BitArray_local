#include "BitArray.h"

unsigned int BitArray::BitMask(unsigned int& task, unsigned int& location)
{
	unsigned int multiplier_int;
	multiplier_int = std::floor(location);

	switch (task)
	{
	case 1:

	}
}

unsigned int BitArray::BitMask(unsigned int& task)
{
	switch (task)
	{
	case 4:

	}
}

BitArray::BitArray()
{
	bitarray = new unsigned int(1);
	used_bits = 0;
	reserved_ints = 1;

	for (int i = 0; i < reserved_ints; i++)
	{
		bitarray[i] = 0;
	}
}

BitArray::BitArray(unsigned int& n)
{
	bitarray = new unsigned int(n);
	used_bits = 0;
	reserved_ints = n;

	for (int i = 0; i < reserved_ints; i++)
	{
		bitarray[i] = 0;
	}
}

BitArray::BitArray(BitArray& obj2)
{
	used_bits = obj2.used_bits;
	reserved_ints = obj2.reserved_ints;
	bitarray = new unsigned int(obj2.reserved_ints);

	for (int i = 0; i < reserved_ints; i++)
	{
		bitarray[i] = obj2.bitarray[i];
	}
}

BitArray::~BitArray()
{
	delete[] bitarray;
}

BitArray BitArray::operator =(BitArray& obj2)
{
	if (reserved_ints != obj2.reserved_ints)
	{
		reserved_ints = obj2.reserved_ints;
		bitarray = new unsigned int(obj2.reserved_ints);
	}

	for (int i = 0; i < reserved_ints; i++)
	{
		bitarray[i] = obj2.bitarray[i];
	}

	used_bits = obj2.used_bits;
}