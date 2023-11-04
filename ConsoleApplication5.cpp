#include <iostream>
#include "Header.h"

int main()
{
    const int size = 5;
    int arr[size] = { 45, 32, 12, 9, 4 };
    ShowArray(arr,size);
    cout << "\n";
    cout << "Minimum: " << GetMin(arr, size) << "\n";
    cout << "Maximum: " << GetMax(arr, size) << "\n";


    return 0;
}

