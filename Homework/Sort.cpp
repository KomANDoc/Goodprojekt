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