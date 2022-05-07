#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void fill(int size, int arr[]);//заполняет массив
void fill(int size, long long arr[]);
void fill(int size, float  arr[]);
void fill(int size, double  arr[]);
void fill(int size, char arr[]);

template <typename T>
void print( const int size, T arr[]);//выводит массив на экран

template <typename T>
void sortUP(const int size, T arr[]);//сортирует по возврастанию

template <typename T>
void sortDOWN(const int size, T arr[]);//сортирует по убыванию

template <typename T>
T sum(const int size, T arr[]);//суммирует числа массива

template <typename T>
T average(const int size, T arr[]);//вычисляет среднее арифметическое 


template <typename T>
T minValue(const int size, T arr[]);//минимальное значение массива


template <typename T>
T maxValue(const int size, T arr[]);//максимальное значение массива


template <typename T>
void shiftRight(const int size, T arr[], int number);//сдвиг массива вправо


template <typename T>
void shiftLeft(const int size, T arr[], int number);//сдвиг массива влево



void main()
{
	setlocale(LC_ALL, "RU");
	const int size = 10;
	double arr[size];//нужно выбрать тип. возможены: int, long long, float, double, char
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

template <typename T> void print( const int size, T arr[])
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << "\n\n";
}
template <typename T> void sortUP(const int size, T arr[])
{
	T buffer;
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
template <typename T> void sortDOWN(const int size, T arr[])
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
template <typename T> T sum(const int size, T arr[])
{
	T amount = 0;
	for (int i = 0; i < size; i++)
	{
		amount = amount + arr[i];
	}
	return amount;
}
template <typename T> T average(const int size, T arr[])
{
	return (double)sum(size, arr) / size;
}
template <typename T> T minValue(const int size, T arr[])
{
	int min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
template <typename T> T maxValue(const int size, T arr[])
{
	int max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
template <typename T> void shiftRight(const int size, T arr[], int number)
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
template <typename T> void shiftLeft(const int size, T arr[], int number)
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
