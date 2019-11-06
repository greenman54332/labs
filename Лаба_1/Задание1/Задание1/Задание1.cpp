#include "pch.h"
#include <iostream>
#include <math.h>

#pragma warning(disable:4996)
using namespace std;

struct chisla {
	int x1, x2, x3;
};

int Init(chisla &in){
	printf("Init data");
	in.x1 = 1;
	in.x2 = 2;
	in.x3 = 3;
	return 0;
}

int Read(chisla &in){
	printf("\nWrite data for x1: ");
	scanf("%d", &in.x1);
	printf("Write data for x2: ");
	scanf("%d", &in.x2);
	printf("Write data for x3: ");
	scanf("%d", &in.x3);

	return 0;
}

int Display(chisla in){
	printf("\nOutput data: ");
	printf("\nx1 = %d, x2 = %d, x3 = %d", in.x1, in.x2, in.x3);

	return 0;
}

int Add(int in, int in2) {
	int sum;
	printf("\nSumming numbers");
	sum = in + in2;
	if (sum >= 1000)
		sum = 0;
	return sum;
}

int perevod(chisla &in) {
	return (in.x1 * 100) + (in.x2 * 10) + in.x3;
}

int main()
{
	chisla first, second;
	Init(first);
	Display(first);
	Read(second);
	int chislo1 = perevod(first);
	printf("\nReceived number 1: %d", chislo1);
	int chislo2 = perevod(second);
	printf("\nReceived number 2: %d", chislo2);
	int third = Add(chislo1, chislo2);
	printf("\nTotal number: %d", third);
	return 0;
}

//changes