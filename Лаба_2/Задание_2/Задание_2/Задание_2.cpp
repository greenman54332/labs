

#include "pch.h"
#include <iostream>

#pragma warning(disable:4996)
using namespace std;

class carriage
{
public:
	int places;
	float price;
	double expected_sales();
	void Init(int init_places, float init_price);
};

void carriage::Init(int init_places, float init_price)//задаёт значения для цены и кол-ва мест
{
	places = init_places;
	price = init_price;
}

double carriage::expected_sales()//вычисляет ожидаемую сумму за продажи билетов в вагоне
{
	return places * price;
}

class train
{
public:
	carriage first, second, third;
	double min_sum();
	double income();
	void Display(double es1, double es2, double es3, double ms, double inc);
	char name[100];


private:
	int percent1 = 25;
	int percent2 = 40;
	int percent3 = 70;

};


void train::Display(double es1, double es2, double es3, double ms, double inc)
{
	printf("The total amount from ticket sales per carriage 1: %g\n", es1);
	printf("The total amount from ticket sales per carriage 2: %g\n", es2);
	printf("The total amount from ticket sales per carriage 3: %g\n", es3);
	printf("Real income from this route: %g\n", inc);
	printf("The carriage with the lowest expected amount of sales: %g\n", ms);
}

double train::min_sum()//находит вагон с наименьшей ожидаемой суммой от продаж
{
	double	min;
	if (first.expected_sales() < second.expected_sales())
		min = first.expected_sales();
	else
		min = second.expected_sales();
	if (min > third.expected_sales())
		min = 3;
	if (min == first.expected_sales())
		min = 1;
	if (min == second.expected_sales())
		min = 2;
	return min;
}

double train::income()//вычисляет реальный доход от продажи билетов
{
	double sum1, sum2, sum3;
	sum1 = first.expected_sales() * percent1 / 100;
	sum2 = second.expected_sales() * percent2 / 100;
	sum3 = third.expected_sales() * percent3 / 100;
	return sum1 + sum2 + sum3;
}

int main()
{
	train one;
	double end_income;
	double end_min_sum;
	one.first.Init(10, 20);//задаёт значения для 1го вагона
	one.second.Init(25, 50);//задаёт значения для 2го вагона
	one.third.Init(35, 30);//задаёт значения для 3го вагона
	double esfirst, essecond, esthird;//es - expected_sales
	esfirst = one.first.expected_sales();//вычисляет ожидаемую сумму от продаж билетов в вагоне 1
	essecond = one.second.expected_sales();//вычисляет ожидаемую сумму от продаж билетов в вагоне 2
	esthird = one.third.expected_sales();//вычисляет ожидаемую сумму от продаж билетов в вагоне 3
	end_income = one.income();//вычисляет реальный доход от продажи билетов
	end_min_sum = one.min_sum();//находит вагон с наименьшей ожидаемой суммой продаж
	printf("Input name: ");
	scanf("%s", one.name);
	printf("Output name: %s\n", one.name);
	one.Display(esfirst, essecond, esthird, end_min_sum, end_income);
	
}


