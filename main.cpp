// Тупая сортировка по возрастанию
#include <iostream> 

using namespace std;

int main()
{
	int numbers[] {6, 0, 9, 3, 5, 1, 8, 2, 7, 4};

	int tmp;

	for(int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++) // sizeof(numbers)/sizeof(numbers[i]) можно узнать размер массива int'ов
	{
		cout << numbers[i];
	}

	for(int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++)
	{
		for(int j = 0; j < sizeof(numbers)/sizeof(numbers[0]); j++)
		{
			if(numbers[i] < numbers[j])
			{
				tmp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = tmp;
			}
		}
	}

	cout << '\n';

	for(int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++)
	{
		cout << numbers[i];
	}

	return 0;
}