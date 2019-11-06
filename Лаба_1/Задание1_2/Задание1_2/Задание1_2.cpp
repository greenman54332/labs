
#include "pch.h"
#include <iostream>
#include <math.h>

#pragma warning(disable:4996)
using namespace std;

struct baskets {
	int x1, x2, x3;
};

int Init(baskets &in) {
	printf("Init data");
	in.x1 = 1;
	in.x2 = 2;
	in.x3 = 3;
	return 0;
}

int Read(baskets &in) {
	printf("\nWrite the number of items in the basket x1: ");
	scanf("%d", &in.x1);
	printf("Write the number of items in the basket x2: ");
	scanf("%d", &in.x2);
	printf("Write the number of items in the basket x3: ");
	scanf("%d", &in.x3);

	return 0;
}

int Display(baskets in) {
	printf("\nOutput the number of items in the baskets: ");
	printf("\nx1 = %d, x2 = %d, x3 = %d", in.x1, in.x2, in.x3);

	return 0;
}

int Add(int in, int in2) {
	int sum;
	printf("\nSumming baskets");
	sum = in + in2;
	if (sum > 27)
		sum = 0;
	return sum;
}

int Sum(baskets &in) {
	return in.x1 + in.x2 + in.x3;
}

int main()
{
	baskets first, second;
	Init(first);
	Display(first);
	Read(second);
	int part1 = Sum(first);
	printf("\nReceived number in first basket: %d", part1);
	int part2 = Sum(second);
	printf("\nReceived number in second basket: %d", part2);
	int all = Add(part1, part2);
	printf("\nTotal amount: %d", all);

	return 0;
}
