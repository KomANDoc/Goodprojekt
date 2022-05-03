#include <iostream>
using namespace std;

void fill(int size, int arr[]);
void print(int size, int arr[]);
void sortUP(const int size, int arr[]);
void sortDOWN(const int size, int arr[]);
int sum(const int size, int arr[]);
double average(const int size, int arr[]);
int minValue(const int size, int arr[]);
int maxValue(const int size, int arr[]);
void shiftRight(const int size, int arr[], int number);
void shiftLeft(const int size, int arr[], int number);


void main()
{
	setlocale(LC_ALL, "");
	const int size = 7;
	int arr[size];
	int number, choice;
	cout << "Это домашнее задание на 03.05.22. здесь собраны такие задания как: \n1 - заполнение массива.";
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
		case 1:	cout << "Заплонение случайными числами." << endl;
			cout << "До: ";
			print(size, arr);
			cout << "После: ";
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
		case 4:	fill(size, arr);
			print(size, arr);
			cout << "Сумма элементов масива: " << sum(size, arr) << "\n\n";
			break;
			///
		case 5:	fill(size, arr);
			print(size, arr);
			cout << "Среднее арифметическое массива: " << average(size, arr) << "\n\n";
			break;
			///
		case 6:	fill(size, arr);
			print(size, arr);
			cout << "Самое маленькое значение массива: " << minValue(size, arr) << "\n\n";
			break;
			///
		case 7:	fill(size, arr);
			print(size, arr);
			cout << "Самое большое значение массива: " << maxValue(size, arr) << "\n\n";
			break;
			///
		case 8: fill(size, arr);//новый массив для сдвига направо
			print(size, arr);

			cout << "Введите колисество сдвигова вправо: "; cin >> number;
			shiftRight(size, arr, number);
			print(size, arr);
			break;
			///
		case 9:	fill(size, arr);//новый массив для сдвига налево
			print(size, arr);

			cout << "Введите количество сдвигов влево: "; cin >> number;
			shiftLeft(size, arr, number);
			print(size, arr);
			break;
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
		arr[i] = rand()%100;
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
void sortUP(const int size, int arr[])
{
	int buffer;
	for (int i = 0; i < size; i++)//vozrastanie
	{
		for (int j = i+1; j < size; j++)
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
		for (int j = i+1; j < size; j++)
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
double average(const int size, int arr[])
{
	return (double)sum(size, arr) / size;
}
int minValue(const int size, int arr[])
{
	int min=arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
int maxValue(const int size, int arr[])
{
	int max=arr[0];
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
void shiftLeft(const int size, int arr[], int number)
{
	while (number > 0)
	{
		int buffer = arr[0];
		for (int i = 0; i < size; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[size - 1] = buffer;
		number--;
	}
}