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