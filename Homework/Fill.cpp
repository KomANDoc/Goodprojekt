#include "stdafx.h"
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
