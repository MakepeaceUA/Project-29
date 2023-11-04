#pragma once
#include <iostream>
using namespace std;


void InRand_Array(int* arr, int size);
void InOutput_Array(int* arr, int size);

void FlRand_Array(double* arr, int size);
void FlOutput_Array(double* arr, int size);

void ChRand_Array(char* arr, int size);
void ChOutput_Array(char* arr, int size);

template <typename T>
T MinElem_Array(T* arr, int size);
template <typename T>
T MaxElem_Array(T* arr, int size);

void Edit_InArray(int* arr, int index, int NewValue);
void Edit_DlArray(double* arr, int index, double NewValue);
void Edit_ChArray(char* arr, int index, char NewValue);



void InRand_Array(int* arr, int size)
{
	for (int i = 0;i < size;i++) 
	{
		arr[i] = rand() % 100;
	}
}

void InOutput_Array(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}


void FlRand_Array(double* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}

void FlOutput_Array(double* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}

void ChRand_Array(char* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}

void ChOutput_Array(char* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}



template <typename T>
T MinElem_Array(T* arr, int size)
{
	T min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
};
template <typename T>
T MaxElem_Array(T* arr, int size)
{
	T max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
};


void Edit_InArray(int* arr, int index, int NewValue)
{
	arr[index] = NewValue;
}

void Edit_DlArray(double* arr, int index, double NewValue)
{
	arr[index] = NewValue;
}

void Edit_ChArray(char* arr, int index, char NewValue) 
{
	arr[index] = NewValue;
}