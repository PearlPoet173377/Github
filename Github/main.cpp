#include<iostream>
using namespace std;

void FillRand(int* arr, const int n);
void Print(int arr[], const int n);

#define DYNAMIC_MEMORY1
#define DYNAMIC_MEMORY2

void main()
{
	int n;
	cout << "Write a number for array: "; cin >> n;
	int* arr = new int[n];
	FillRand(arr, n);
	Print(arr, n);

	int brr[5];
	cout << brr << endl;
	FillRand(brr, 5);
	Print(brr, 5);

	delete[] arr;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % 100; // первый вариант обращения к динам массиву(по адресу)
	}
}

void Print(int* arr, const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t"; //обращение по индексу
	}
	cout << endl;
}