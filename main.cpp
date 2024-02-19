#include <iostream>
#include <stdlib.h>

using namespace std;


void sort(int numbers[], int n)
{
	int tmp;
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(numbers[i] > numbers[j])
			{
				swap(numbers[i], numbers[j]);
			}
		}
	}
}

void printNum(int numbers[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << ' ' << numbers[i];
	}
	cout << '\n';
}

int main()
{
	int numbers[] {6, 0, 9, 3, 5, 1, 8, 2, 7, 4};
	int n = sizeof(numbers)/sizeof(numbers[0]); // Размер массива

	printNum(numbers, n);

	sort(numbers, n);

	printNum(numbers, n);

	return 0;
}