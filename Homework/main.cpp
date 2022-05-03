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
	cout << "��� �������� ������� �� 03.05.22. ����� ������� ����� ������� ���: \n1 - ���������� �������.";
	cout << "\n2 - ���������� �� ������������ ";
	cout << "\n3 - ���������� �� �������� ";
	cout << "\n4 - ����� ��������� ������� ";
	cout << "\n5 - ������� �������������� ������� ";
	cout << "\n6 - ����� ����� ����� ������� ";
	cout << "\n7 - ����� ������� ����� ������� ";
	cout << "\n8 - ����� ������� ������ ";
	cout << "\n9 - ����� ������� ����� " << endl;

	do
	{
		cout << "������� ������ �������: "; cin >> choice; cout << "\n";
		switch (choice)
		{
		case 1:	cout << "���������� ���������� �������." << endl;
			cout << "��: ";
			print(size, arr);
			cout << "�����: ";
			fill(size, arr);
			print(size, arr);
			break;
			///
		case 2:	cout << "���������� �� �����������. ��: " << endl;
			fill(size, arr);
			print(size, arr);
			cout << "���������� �� �����������. �����: " << endl;
			sortUP(size, arr);
			print(size, arr);
			break;
			/// 
		case 3:	cout << "���������� �� ��������. ��: " << endl;
			fill(size, arr);
			print(size, arr);
			cout << "���������� �� ��������. �����: " << endl;
			sortDOWN(size, arr);
			print(size, arr);
			break;
			///
		case 4:	fill(size, arr);
			print(size, arr);
			cout << "����� ��������� ������: " << sum(size, arr) << "\n\n";
			break;
			///
		case 5:	fill(size, arr);
			print(size, arr);
			cout << "������� �������������� �������: " << average(size, arr) << "\n\n";
			break;
			///
		case 6:	fill(size, arr);
			print(size, arr);
			cout << "����� ��������� �������� �������: " << minValue(size, arr) << "\n\n";
			break;
			///
		case 7:	fill(size, arr);
			print(size, arr);
			cout << "����� ������� �������� �������: " << maxValue(size, arr) << "\n\n";
			break;
			///
		case 8: fill(size, arr);//����� ������ ��� ������ �������
			print(size, arr);

			cout << "������� ���������� �������� ������: "; cin >> number;
			shiftRight(size, arr, number);
			print(size, arr);
			break;
			///
		case 9:	fill(size, arr);//����� ������ ��� ������ ������
			print(size, arr);

			cout << "������� ���������� ������� �����: "; cin >> number;
			shiftLeft(size, arr, number);
			print(size, arr);
			break;
		default: cout << "\n������ �������� ����� �������." << endl;
		}
		cout << "��������� ��������� ����� - 1 \n����� �� ��������� - 0 \n�����: ";cin >> choice;
		while (choice != 1 and choice != 0)
		{
			cout << "�� ����� �� ������ �����\n������� �����: " << endl;
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