#include <iostream>
#include <cstdlib>
#include "function.h"
using namespace std;



int main()
{
	srand(time(0));

	const int size = 5;
	
	int In_arr[size];
	double Dl_arr[size];
	char Ch_arr[size];
	
	InRand_Array(In_arr, size);
	FlRand_Array(Dl_arr, size);
	ChRand_Array(Ch_arr, size);

	
	InOutput_Array(In_arr, size);
	FlOutput_Array(Dl_arr, size);
	ChOutput_Array(Ch_arr, size);

	
	cout << "Minimum int:" << MinElem_Array(In_arr, size) << "\n";
	cout << "Maximum int:" << MaxElem_Array(In_arr, size) << "\n\n";

	cout << "Minimum double:" << MinElem_Array(Dl_arr, size) << "\n";
	cout << "Maximum double:" << MaxElem_Array(Dl_arr, size) << "\n\n";

	cout << "Minimum char:" << MinElem_Array(Ch_arr, size) << "\n";
	cout << "Maximum char:" << MaxElem_Array(Ch_arr, size) << "\n\n";

	Edit_InArray(In_arr, 2, 99);
	for (int i = 0; i < size; i++)
	{
		cout << In_arr[i] << " ";
	}
	cout << "\n";
	Edit_DlArray(Dl_arr, 1, 400);
	for (int i = 0; i < size; i++)
	{
		cout << Dl_arr[i] << " ";
	}
	cout << "\n";
	Edit_ChArray(Ch_arr, 4, 400);
	for (int i = 0; i < size; i++)
	{
		cout << Ch_arr[i] << " ";
	}
	cout << "\n";
}