#include "stdafx.h"
#include "Fill.h"
#include "Print.h"
#include "SortUp.h"
#include "SortDown.h"
#include "Statistics.h"
#include "Shift.h"

void main()
{
	setlocale(LC_ALL, "RU");
	const int size = 10;
	int arr[size];//нужно выбрать тип. возможены: int, long long, float, double, char
	int number, choice;
	cout << "Здесь собраны такие задания как: \n1 - заполнение массива ";
	cout << "\n2 - сортировка по возврастанию ";
	cout << "\n3 - сортировка по убыванию ";
	cout << "\n4 - сумма элементов массива ";
	cout << "\n5 - среднее арифметическое массива ";
	cout << "\n6 - самое малое число массива ";
	cout << "\n7 - самое большое число массива ";
	cout << "\n8 - сдвиг массива вправо ";
	cout << "\n9 - сдвиг массива влево " << endl;

	do
	{
		cout << "Укажите нужное задание: "; cin >> choice; cout << "\n";
		switch (choice)
		{
		case 1:	cout << "Заплонение случайными числами. До: " << endl;
			print(size, arr);
			cout << "Заплонение случайными числами. После: " << endl;
			fill(size, arr);
			print(size, arr);
			break;
			///
		case 2:	cout << "Сортировка по возрастанию. До: " << endl;
			fill(size, arr);
			print(size, arr);
			cout << "Сортировка по возрастанию. После: " << endl;
			sortUP(size, arr);
			print(size, arr);
			break;
			/// 
		case 3:	cout << "Сортировка по убыванию. До: " << endl;
			fill(size, arr);
			print(size, arr);
			cout << "Сортировка по убыванию. После: " << endl;
			sortDOWN(size, arr);
			print(size, arr);
			break;
			///
		case 4:	cout << "Массив:\n\n"; fill(size, arr);
			print(size, arr);
			cout << "Сумма элементов масива: " << sum(size, arr) << "\n\n";
			break;
			///
		case 5:	cout << "Массив:\n\n"; fill(size, arr);
			print(size, arr);
			cout << "Среднее арифметическое массива: " << average(size, arr) << "\n\n";
			break;
			///
		case 6:	cout << "Массив:\n\n"; fill(size, arr);
			print(size, arr);
			cout << "Самое маленькое значение массива: " << minValue(size, arr) << "\n\n";
			break;
			///
		case 7:	cout << "Массив:\n\n"; fill(size, arr);
			print(size, arr);
			cout << "Самое большое значение массива: " << maxValue(size, arr) << "\n\n";
			break;
			///
		case 8: cout << "Массив:\n\n"; fill(size, arr);
			print(size, arr);

			cout << "Введите колисество сдвигова вправо: "; cin >> number; cout << endl;
			shiftRight(size, arr, number);
			print(size, arr);
			break;
			///
		case 9:	cout << "Массив:\n\n"; fill(size, arr);
			print(size, arr);

			cout << "Введите количество сдвигов влево: "; cin >> number; cout << endl;
			shiftLeft(size, arr, number);
			print(size, arr);
			break;
			///
		default: cout << "\nВыбран неверный номер задания." << endl;
		}
		cout << "Запустить программу снова - 1 \nВыйти из программы - 0 \nВыбор: ";cin >> choice;
		while (choice != 1 and choice != 0)
		{
			cout << "Вы ввели не верное число\nВведите снова: " << endl;
			cin >> choice;
		}
	} while (choice == 1);
}


void fill(int size, int arr[])
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}
void fill(int size, long long arr[])
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand();
	}
}
void fill(int size, float arr[])
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = (float)rand() / 1000;
	}
}
void fill(int size, double  arr[])
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = (double)rand() / 1000;
	}
}
void fill(int size, char arr[])
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand();
	}
}

void print(int size, int arr[])
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << "\n\n";
}
void print(int size, long long arr[])
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << "\n\n";
}
void print(int size, float arr[])
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << "\n\n";
}
void print(int size, double  arr[])
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << "\n\n";
}
void print(int size, char arr[])
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << "\n\n";
}

void sortUP(const int size, int arr[])
{
	int buffer;
	for (int i = 0; i < size; i++)//vozrastanie
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				buffer = arr[j];
				arr[j] = arr[i];
				arr[i] = buffer;
			}
		}
	}
}
void sortUP(const int size, long long arr[])
{
	long long buffer;
	for (int i = 0; i < size; i++)//vozrastanie
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				buffer = arr[j];
				arr[j] = arr[i];
				arr[i] = buffer;
			}
		}
	}
}
void sortUP(const int size, float arr[])
{
	float buffer;
	for (int i = 0; i < size; i++)//vozrastanie
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				buffer = arr[j];
				arr[j] = arr[i];
				arr[i] = buffer;
			}
		}
	}
}
void sortUP(const int size, double  arr[])
{
	double  buffer;
	for (int i = 0; i < size; i++)//vozrastanie
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				buffer = arr[j];
				arr[j] = arr[i];
				arr[i] = buffer;
			}
		}
	}
}
void sortUP(const int size, char arr[])
{
	char buffer;
	for (int i = 0; i < size; i++)//vozrastanie
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				buffer = arr[j];
				arr[j] = arr[i];
				arr[i] = buffer;
			}
		}
	}
}

void sortDOWN(const int size, int arr[])
{
	int buffer;
	for (int i = 0; i < size; i++)//ubivaniu
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] < arr[j])
			{
				buffer = arr[j];
				arr[j] = arr[i];
				arr[i] = buffer;
			}
		}
	}
}
void sortDOWN(const int size, long long arr[])
{
	long long buffer;
	for (int i = 0; i < size; i++)//ubivaniu
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] < arr[j])
			{
				buffer = arr[j];
				arr[j] = arr[i];
				arr[i] = buffer;
			}
		}
	}
}
void sortDOWN(const int size, float arr[])
{
	float buffer;
	for (int i = 0; i < size; i++)//ubivaniu
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] < arr[j])
			{
				buffer = arr[j];
				arr[j] = arr[i];
				arr[i] = buffer;
			}
		}
	}
}
void sortDOWN(const int size, double  arr[])
{
	double  buffer;
	for (int i = 0; i < size; i++)//ubivaniu
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] < arr[j])
			{
				buffer = arr[j];
				arr[j] = arr[i];
				arr[i] = buffer;
			}
		}
	}
}
void sortDOWN(const int size, char arr[])
{
	char buffer;
	for (int i = 0; i < size; i++)//ubivaniu
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] < arr[j])
			{
				buffer = arr[j];
				arr[j] = arr[i];
				arr[i] = buffer;
			}
		}
	}
}

int sum(const int size, int arr[])
{
	int amount = 0;
	for (int i = 0; i < size; i++)
	{
		amount = amount + arr[i];
	}
	return amount;
}
long long sum(const int size, long long arr[])
{
	long long amount = 0;
	for (int i = 0; i < size; i++)
	{
		amount = amount + arr[i];
	}
	return amount;
}
float sum(const int size, float arr[])
{
	float amount = 0;
	for (int i = 0; i < size; i++)
	{
		amount = amount + arr[i];
	}
	return amount;
}
double  sum(const int size, double  arr[])
{
	double  amount = 0;
	for (int i = 0; i < size; i++)
	{
		amount = amount + arr[i];
	}
	return amount;
}
char sum(const int size, char arr[])
{
	char amount = ' ';
	for (int i = 0; i < size; i++)
	{
		amount = amount + arr[i];
	}
	return amount;
}

double  average(const int size, int arr[])
{
	return (double)sum(size, arr) / size;
}
double  average(const int size, long long arr[])
{
	return (double)sum(size, arr) / size;
}
float  average(const int size, float arr[])
{
	return (float)sum(size, arr) / size;
}
double  average(const int size, double  arr[])
{
	return (double)sum(size, arr) / size;
}
char  average(const int size, char arr[])
{
	return (char)sum(size, arr) / size;
}

int minValue(const int size, int arr[])
{
	int min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
long long minValue(const int size, long long arr[])
{
	long long min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
float minValue(const int size, float arr[])
{
	float min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
double  minValue(const int size, double  arr[])
{
	double  min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
char minValue(const int size, char arr[])
{
	char min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

int maxValue(const int size, int arr[])
{
	int max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
long long maxValue(const int size, long long arr[])
{
	long long max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
float maxValue(const int size, float arr[])
{
	float max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
double  maxValue(const int size, double  arr[])
{
	double  max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
char  maxValue(const int size, char  arr[])
{
	char  max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

void shiftRight(const int size, int arr[], int number)
{
	while (number > 0)
	{
		int buffer = arr[size - 1];
		for (int i = size - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
		number--;
	}
}
void shiftRight(const int size, long long arr[], int number)
{
	while (number > 0)
	{
		long long buffer = arr[size - 1];
		for (int i = size - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
		number--;
	}
}
void shiftRight(const int size, float arr[], int number)
{
	while (number > 0)
	{
		float buffer = arr[size - 1];
		for (int i = size - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
		number--;
	}
}
void shiftRight(const int size, double  arr[], int number)
{
	while (number > 0)
	{
		double  buffer = arr[size - 1];
		for (int i = size - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
		number--;
	}
}
void shiftRight(const int size, char arr[], int number)
{
	while (number > 0)
	{
		char buffer = arr[size - 1];
		for (int i = size - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
		number--;
	}
}

void shiftLeft(const int size, int arr[], int number)
{
	/*while (number > 0)
	{
		int buffer = arr[0];
		for (int i = 0; i < size; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[size - 1] = buffer;
		number--;
	}*/
	shiftRight(size, arr, size - number);
}
void shiftLeft(const int size, long long arr[], int number)
{
	/*while (number > 0)
	{
		long long buffer = arr[0];
		for (int i = 0; i < size; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[size - 1] = buffer;
		number--;
	}
	*/
	shiftRight(size, arr, size - number);
}
void shiftLeft(const int size, float arr[], int number)
{
	while (number > 0)
	{
		float buffer = arr[0];
		for (int i = 0; i < size; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[size - 1] = buffer;
		number--;
	}
}
void shiftLeft(const int size, double  arr[], int number)
{
	while (number > 0)
	{
		double  buffer = arr[0];
		for (int i = 0; i < size; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[size - 1] = buffer;
		number--;
	}
}
void shiftLeft(const int size, char arr[], int number)
{
	while (number > 0)
	{
		char buffer = arr[0];
		for (int i = 0; i < size; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[size - 1] = buffer;
		number--;
	}
}