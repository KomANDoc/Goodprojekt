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
