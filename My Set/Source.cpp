#include <iostream>
#include <string>
#include <array>
#include "pch.h"
#include "Header.h"

int main()
{
	int i;
	int newElement;
	int target;
	int index = 0;
	int scale{};
	int* arry{ new int[scale] };
	int grow_size;
	int g = 1;
	int b = 2;
	bool h = false;

	int n = sizeof(arry) / sizeof(arry[0]);

	scale = 5;

	std::cout << "Input new array size : ";
	std::cin >> scale;
	std::cout << "New array size is " << scale << endl;

	cout << "" << endl;

	sorter<int>(arry, n);
	sorter<int>(arry, n);

	cout << "Array list: ";
	for (i = 0; i < scale; i++) {
		cout << arry[i] << " ";
	}
	cout << "" << endl;
}