
#include "pch.h"
#include <iostream>

#pragma warning(disable:4996)
using namespace std;

class train
{
public:
	int percent1;
	int percent2;
	int percent3;
	class carriage1
	{
	public:
		int places;
		float price;
	};
	
	class carriage2
	{
	public:
		int places;
		float price;
	};

	class carriage3
	{
	public:
		int places;
		float price;
	};
	double income();
	double expected_sales();
};

double train::income()
{
	carriage1 a;
	carriage2 b;
	carriage3 c;
	double seats1, seats2, seats3, sum;
	seats1 = a.places / 100 * percent1 * a.price;
	seats2 = b.places / 100 * percent2 * b.price;
	seats3 = c.places / 100 * percent3 * c.price;
	return sum = seats1 + seats2 + seats3;
}

double train::expected_sales()
{
	carriage1 a;
	carriage2 b;
	carriage3 c;
	double min, product1, product2, product3;
	product1 = a.places * a.price;
	product2 = b.places * b.price;
	product3 = c.places * c.price;
	if (product1 <= product2)
		min = 1;
	else
		min = 2;
	if (min >= product3)
		min = 3;
	return min;
}



int main()
{
	



}

