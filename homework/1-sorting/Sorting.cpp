#include "stdafx.h"
#include "iostream"
using namespace std;


int main()
{
	int *array;
	int size;
	cin >> size;
	array = new int[size];
	for (int i = 0; i < size; i++)
	{
		cout << "array[" << i << "]=";
		cin >> array[i];
	}
	int t;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				t = array[j];
				array[j] = array[j + 1];
				array[j + 1] = t;
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " " << endl;
	}
	delete[]array;
    return 0;
}
