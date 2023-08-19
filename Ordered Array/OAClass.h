#pragma once

#include <iostream>
#include <istream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

template <class T>

class OrderedArray
{

	//T* array[];
	size_t grow_size;

private:

	//size of array
	//int size;
	//container size
	//int capacity = scale;

	//connected to index
	int w = 1;
	//connected to value
	int x;

	int v;

	//connected to size
	int y;
	int z;
	int n;

	//int p;
	int u;

	bool h;

	string c = "";

public:

	int size {};
	
	int* arr{ new int[size] };

	const int p = 0;

	//int scale;

	//increase size
	OrderedArray(int grow_size); //
	//Basic builder
	OrderedArray(); //
	//Destructor
	~OrderedArray(); //
	//Add element
	void push(const T& newElement); //
	//# of elements added
	int length(); //
	//Gets element based on index
	T getElement(int index); //
	//Removes element based on index
	bool remove(int index); //
	//Gets index based on element
	int search(const T& target); //
	//Removes all elements
	void clear(); //

	int length2();

};
/*
template <class T>
void menu(string c)
{
	int g = 1;
	int b = 2;

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
			//OrderedArray<T>::OrderedArray(int grow_size);
		}
		if (c == "add") {
			void push(const T & newElement);
			cout << "hello" << endl;
		}
		if (c == "remove") {
			bool remove(int index);
		}
		if (c == "scale") {
			int length();
		}
		if (c == "getelement") {
			T getElement(int index);
		}
		if (c == "getindex") {
			int search(const T& target);
		}
		if (c == "empty") {
			void clear();
		}
		if (c == "delete") {
			//OrderedArray<T>::~OrderedArray();
		}
		else {
			cout << "Invalid statement" << endl;
		}
	}
}
*/

template <class T>
OrderedArray<T>::OrderedArray()
{
	int z = 0;



	const int p = 0;
	grow_size = 1;

	cout << "Input an array size : ";
	std::cin >> size;

	//std::array<int, p> u;
	//int array[5];

}

template <class T>
OrderedArray<T>::OrderedArray(int grow_size)
{
	int k;
	int z = grow_size;

	int size{};
	int* arr{ new int[size] };

	cout << "" << endl;
	cout << "Input new array size : ";
	cin >> size;

	this->grow_size = grow_size;
	array = new int[grow_size];
	size = 0;

	cout << "Array has been resized" << endl;

	return(size);
}

//Destructor
template <class T>
OrderedArray<T>::~OrderedArray()
{
	//cout << "" << endl;
	//cout << "Array deleted" << endl;
	//delete[] array;

	//return 0;
}

//Value Sorter
template <class T> void sorter(T arr[], int n)
{

	//
	for (int i = 0; i < n - 1; i++) {
		for (int j = n - 1; i < j; j--) {
			if (arr[j] < arr[j - 1]) {
				swap(arr[j], arr[j - 1]);
			}
		}
	}
	//
	for (int j = n - 1; 0 <= j; j--) {
		if (arr[j] < 1) {
			if (arr[j] > -1) {
				arr[j] = -347000;
			}
		}
	}
	//
	for (int i = 0; i < n - 1; i++) {
		for (int j = n - 1; i < j; j--) {
			if (arr[j - 1] < -346999) {
				if (arr[j - 1] > -347001) {
					swap(arr[j], arr[j - 1]);
				}
			}
		}
	}
	//
	for (int j = n - 1; 0 <= j; j--) {
		if (arr[j] < -346999) {
			if (arr[j] - 347001) {
				arr[j] = 0;
			}
		}
	}
	//

}

// y
//Length of array (values)
template <class T>
int length()
{
	int u;
	int k;

	int size{};
	int* arr{ new int[size] };

	int scale = sizeof(scale) / sizeof(int);

	cout << "" << endl;
	cout << "The array contains " << scale << " elements" << endl;

	return scale;

}

template <class T>
void push(const T& newElement)
{
	int k;
	int n;

	int size{};
	int* arr{ new int[size] };

	int scale;
	int grow_size;
	int i;
	int y;
	cout << "" << endl;
	cout << "Enter element to add : ";
	cin >> y;

	// check if array has no space left
	if (n = size) {

		// grow array by double
		//growArray();
		cout << "Array full. Please remove an element or increase array size" << endl;
	}
	else {

		i = size;
		arr[i] = y;
		cout << "Element added" << endl;

		/*
		for (int i = 0; i < size; i++) {
			// insert element
			//array[i] = array[i + 1];
			//array[size] = int y;
			if (arr[i] = 0) {
				arr[i] = y;
				cout << "Element added" << endl;
				break;
			}
		}
		*/
	}
}

// Delete element at given index
template <class T>
bool remove(int index)
{
	//int k;

	int i;
	int v;
	bool h = false;
	int scale;

	int size{};
	int* arr{ new int[size] };

	//index = 0;

	cout << "" << endl;
	cout << "Input index to remove element from : ";
	cin >> v;

	for (int i = 0; i < v+1; i++) {

		if (i >= v) {

			arr[i] = 0;
			bool h = 1;
			cout << "Element removed : True" << endl;
			return h;

		}
	}

	if (h == 0) {
		cout << "Element removed : False" << endl;
	}

	return h;
}

// Find index of a given element
template <class T>
int search(const T& target)
{
	int k;
	int x;
	int w;
	int scale;

	int size{};
	int* arr{ new int[size] };

	cout << "" << endl;
	cout << "Input an element : ";
	cin >> x;

	int elem = x;
	int i = 0;

	while (i < x)
	{
		i++;
	}

	if (i < size)
	{
		//out index. bool = true
		int w = arr[i];
		cout << "Element " << elem << " is at index " << i << endl;
	}
	else
	{
		//bool = false
		int w = -1;
		cout << "Element not found. " << elem << "returned index " << w << endl;
	}

	return 0;
}

template <class T>
T getElement(int index)
{
	int k;
	int w;
	int x;
	int scale;
	int size{};
	int* arr{ new int[size] };

	cout << "" << endl;
	cout << "Input an index : ";
	cin >> w;

	int elem = 0;
	int i = 0;

	while (i < w)
	{
		i++;
	}

	if (i == w)
	{
		//out value. x
		int elem = arr[i];
		cout << "Index " << i << " contains element " << elem << endl;
	}
	if (i != w)
	{
		//out value 0
		int elem = 0;
		cout << "No element found. " << i << " has element " << elem << endl;
	}

	return 0;
}

template <class T>
void clear()
{
	int k;
	int i;
	int scale;

	int size{};
	int* arr{ new int[size] };

	for (i = 0; i < size; i++)
	{
		arr[i] = 0;
	}

	cout << "" << endl;
	cout << "All elements cleared" << endl;

}
