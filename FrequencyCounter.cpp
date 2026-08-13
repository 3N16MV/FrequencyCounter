/* ---------------------------------------------------------------------------
** Author: Alexis Lariviere
** Class: CSC 242
** Assignment: Assignment 4
** File: FrequencyCounter.cpp
** Description: This program finds the most frequently occurring value in an
array of numbers.
** Date: 08/09/2026
** -------------------------------------------------------------------------*/

#include <iostream>

using namespace std;

int main()

{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter " << size << " numbers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int maxCount = 0;
    int mostFrequent = arr[0];

    for (int i = 0; i < size; i++) {
        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mostFrequent = arr[i];
        }
    }

    cout << "The most frequently occurring value is: " << mostFrequent << endl;

    delete[] arr;
    return 0;
}