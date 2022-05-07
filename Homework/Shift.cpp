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