#include "pch.h"
#include <iostream>
#include <math.h>

#pragma warning(disable:4996)
using namespace std;

class baskets {
private:
	int x1, x2, x3;
public:
	baskets() {
		printf("Constructor\n");
		x1 = 0;
		x2 = 0;
		x3 = 0;
	}
	~baskets() {
		printf("\nDestructor");
	}
	void Init(int a, int b, int c) {
		printf("Init data");
		x1 = a;
		x2 = b;
		x3 = c;
	}
	void Read() {
		printf("\nWrite the number of items in the basket x1: ");
		scanf("%d", &x1);
		printf("\nWrite the number of items in the basket x2: ");
		scanf("%d", &x2);
		printf("\nWrite the number of items in the basket x3: ");
		scanf("%d", &x3);
	}
	void Display() {
		printf("\nOutput the number of items in the baskets: ");
		printf("\nx1 = %d, x2 = %d, x3 = %d", x1, x2, x3);
	}
	int Add(int in, int in2) {
		int sum;
		printf("\nSumming baskets");
		sum = in + in2;
		if (sum > 27)
			sum = 0;
		return sum;
	}
	int perevod() {
		return x1 + x2 + x3;
	}
};


int main()
{
	baskets one, two;
	one.Init(1, 2, 3);
	one.Display();
	int first = one.perevod();
	printf("\nReceived number 1: %d", first);
	two.Read();
	int second = two.perevod();
	printf("\nReceived number 2: %d", second);
	int third = one.Add(first, second);
	printf("\nTotal number: %d", third);

	return 0;
}