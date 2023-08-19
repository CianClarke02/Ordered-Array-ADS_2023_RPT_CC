#include <iostream>
#include <string>
#include <array>
#include "pch.h"
#include "OAClass.h"



string c;
int y;
int main()
{
	int newElement;
	int target;
	int index = 0;
	int size {};
	int* arr{ new int[size] };
	int scale = 0;
	int grow_size;
	int g = 1;
	int b = 2;
	bool h = false;

	int n = sizeof(arr) / sizeof(arr[0]);

	size = 5;

	/*
	for (int i = 1; i < size; i++) {
		arr[i] = 0;
	}
	*/

	cout << "" << endl;
	cout << "Choose an action:" << endl;
	cout << "" << endl;
	cout << "Increase array size:				increase" << endl;
	cout << "Add an element:					add" << endl;
	cout << "Remove an element based on index:		remove" << endl;
	cout << "How many elements are in array:			scale" << endl;
	cout << "Show element of an index:			get element" << endl;
	cout << "Show index of an element:			get index" << endl;
	cout << "Empty array:					empty" << endl;
	cout << "Destroy array:					delete" << endl;

	while (g < b) {
		cout << "" << endl;
		cout << "Awaiting input : ";
		cin >> c;

		if (c == "increase") {
			std::cout << "Input new array size : ";
			std::cin >> size;
			std::cout << "New array size is " << size << endl;
			//std::cout << arr[1];
			//OrderedArray<T>::OrderedArray(int grow_size);
			//OrderedArray<int>(grow_size);
		}
		if (c == "add") {
			push<int>(newElement);
			sorter<int>(arr, n);
			cout << "hello" << endl;
		}
		if (c == "remove") {
			remove<int>(index);
			sorter<int>(arr, n);
		}
		if (c == "scale") {
			length<int>();
		}
		if (c == "getelement") {
			getElement<int>(index);
		}
		if (c == "getindex") {
			search<int>(target);
		}
		if (c == "empty") {
			clear<void>();
		}
		if (c == "delete") {
			//OrderedArray<T>::~OrderedArray();
			break;  
		}
		if (c == "out") {
			cout << " Sorted array : ";
			for (int i = 0; i < size; i++)
				cout << arr[i] << " ";
			cout << endl;
		}
		else {
			cout << "Invalid statement" << endl;
		}
	}

    return 0;
}